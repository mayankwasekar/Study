using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows;
using System.Windows.Controls;
using System.Windows.Data;
using System.Windows.Documents;
using System.Windows.Input;
using System.Windows.Media;
using System.Windows.Media.Imaging;
using System.Windows.Navigation;
using System.Windows.Shapes;

namespace WpfClientApp
{
    using Shopping;
    using System.Collections.ObjectModel;

    class OrderEntry
    {
        public int Id { get; set; }

        public string Item { get; set; }

        public int Quantity { get; set; }

        public double Amount { get; set; }

    }

    /// <summary>
    /// Interaction logic for MainWindow.xaml
    /// </summary>
    public partial class MainWindow : Window
    {
        ObservableCollection<OrderEntry> orders = new ObservableCollection<OrderEntry>();

        public MainWindow()
        {
            InitializeComponent();

            ordersDataGrid.ItemsSource = orders;
        }

        private void getButton_Click(object sender, RoutedEventArgs e)
        {
            string item = itemTextBox.Text.ToLower();

            using (var client = new CustomerSupportClient())
            {
                int stock = client.Inquire(item);
                quantityTextBox.Text = stock.ToString();
            }
        }

        private void buyButton_Click(object sender, RoutedEventArgs e)
        {
            string item = itemTextBox.Text.ToLower();
            int quantity = int.Parse(quantityTextBox.Text);

            using (var client = new CustomerSupportClient())
            {
                Receipt receipt = client.Purchase(item, quantity);
                if(receipt.Status != 0)
                {
                    orders.Add(new OrderEntry
                    {
                        Id = receipt.Status,
                        Item = item,
                        Quantity = quantity,
                        Amount = receipt.Payment
                    });
                }
            }
        }
    }
}
