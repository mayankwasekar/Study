﻿//------------------------------------------------------------------------------
// <auto-generated>
//     This code was generated by a tool.
//     Runtime Version:4.0.30319.42000
//
//     Changes to this file may cause incorrect behavior and will be lost if
//     the code is regenerated.
// </auto-generated>
//------------------------------------------------------------------------------

namespace WpfClientApp.Shopping {
    
    
    [System.CodeDom.Compiler.GeneratedCodeAttribute("System.ServiceModel", "4.0.0.0")]
    [System.ServiceModel.ServiceContractAttribute(Namespace="http://shopping/", ConfigurationName="Shopping.CustomerSupport")]
    public interface CustomerSupport {
        
        // CODEGEN: Parameter 'return' requires additional schema information that cannot be captured using the parameter mode. The specific attribute is 'System.Xml.Serialization.XmlElementAttribute'.
        [System.ServiceModel.OperationContractAttribute(Action="http://shopping/CustomerSupport/InquireRequest", ReplyAction="http://shopping/CustomerSupport/InquireResponse")]
        [System.ServiceModel.XmlSerializerFormatAttribute(SupportFaults=true)]
        [return: System.ServiceModel.MessageParameterAttribute(Name="return")]
        WpfClientApp.Shopping.InquireResponse Inquire(WpfClientApp.Shopping.InquireRequest request);
        
        [System.ServiceModel.OperationContractAttribute(Action="http://shopping/CustomerSupport/InquireRequest", ReplyAction="http://shopping/CustomerSupport/InquireResponse")]
        System.Threading.Tasks.Task<WpfClientApp.Shopping.InquireResponse> InquireAsync(WpfClientApp.Shopping.InquireRequest request);
        
        // CODEGEN: Parameter 'return' requires additional schema information that cannot be captured using the parameter mode. The specific attribute is 'System.Xml.Serialization.XmlElementAttribute'.
        [System.ServiceModel.OperationContractAttribute(Action="http://shopping/CustomerSupport/PurchaseRequest", ReplyAction="http://shopping/CustomerSupport/PurchaseResponse")]
        [System.ServiceModel.XmlSerializerFormatAttribute(SupportFaults=true)]
        [return: System.ServiceModel.MessageParameterAttribute(Name="return")]
        WpfClientApp.Shopping.PurchaseResponse Purchase(WpfClientApp.Shopping.PurchaseRequest request);
        
        [System.ServiceModel.OperationContractAttribute(Action="http://shopping/CustomerSupport/PurchaseRequest", ReplyAction="http://shopping/CustomerSupport/PurchaseResponse")]
        System.Threading.Tasks.Task<WpfClientApp.Shopping.PurchaseResponse> PurchaseAsync(WpfClientApp.Shopping.PurchaseRequest request);
    }
    
    [System.Diagnostics.DebuggerStepThroughAttribute()]
    [System.CodeDom.Compiler.GeneratedCodeAttribute("System.ServiceModel", "4.0.0.0")]
    [System.ComponentModel.EditorBrowsableAttribute(System.ComponentModel.EditorBrowsableState.Advanced)]
    [System.ServiceModel.MessageContractAttribute(WrapperName="Inquire", WrapperNamespace="http://shopping/", IsWrapped=true)]
    public partial class InquireRequest {
        
        [System.ServiceModel.MessageBodyMemberAttribute(Namespace="http://shopping/", Order=0)]
        [System.Xml.Serialization.XmlElementAttribute(Form=System.Xml.Schema.XmlSchemaForm.Unqualified)]
        public string arg0;
        
        public InquireRequest() {
        }
        
        public InquireRequest(string arg0) {
            this.arg0 = arg0;
        }
    }
    
    [System.Diagnostics.DebuggerStepThroughAttribute()]
    [System.CodeDom.Compiler.GeneratedCodeAttribute("System.ServiceModel", "4.0.0.0")]
    [System.ComponentModel.EditorBrowsableAttribute(System.ComponentModel.EditorBrowsableState.Advanced)]
    [System.ServiceModel.MessageContractAttribute(WrapperName="InquireResponse", WrapperNamespace="http://shopping/", IsWrapped=true)]
    public partial class InquireResponse {
        
        [System.ServiceModel.MessageBodyMemberAttribute(Namespace="http://shopping/", Order=0)]
        [System.Xml.Serialization.XmlElementAttribute(Form=System.Xml.Schema.XmlSchemaForm.Unqualified)]
        public int @return;
        
        public InquireResponse() {
        }
        
        public InquireResponse(int @return) {
            this.@return = @return;
        }
    }
    
    /// <remarks/>
    [System.CodeDom.Compiler.GeneratedCodeAttribute("System.Xml", "4.7.3062.0")]
    [System.SerializableAttribute()]
    [System.Diagnostics.DebuggerStepThroughAttribute()]
    [System.ComponentModel.DesignerCategoryAttribute("code")]
    [System.Xml.Serialization.XmlTypeAttribute(Namespace="http://shopping/")]
    public partial class Receipt : object, System.ComponentModel.INotifyPropertyChanged {
        
        private double paymentField;
        
        private int statusField;
        
        /// <remarks/>
        [System.Xml.Serialization.XmlElementAttribute(Form=System.Xml.Schema.XmlSchemaForm.Unqualified, Order=0)]
        public double Payment {
            get {
                return this.paymentField;
            }
            set {
                this.paymentField = value;
                this.RaisePropertyChanged("Payment");
            }
        }
        
        /// <remarks/>
        [System.Xml.Serialization.XmlElementAttribute(Form=System.Xml.Schema.XmlSchemaForm.Unqualified, Order=1)]
        public int Status {
            get {
                return this.statusField;
            }
            set {
                this.statusField = value;
                this.RaisePropertyChanged("Status");
            }
        }
        
        public event System.ComponentModel.PropertyChangedEventHandler PropertyChanged;
        
        protected void RaisePropertyChanged(string propertyName) {
            System.ComponentModel.PropertyChangedEventHandler propertyChanged = this.PropertyChanged;
            if ((propertyChanged != null)) {
                propertyChanged(this, new System.ComponentModel.PropertyChangedEventArgs(propertyName));
            }
        }
    }
    
    [System.Diagnostics.DebuggerStepThroughAttribute()]
    [System.CodeDom.Compiler.GeneratedCodeAttribute("System.ServiceModel", "4.0.0.0")]
    [System.ComponentModel.EditorBrowsableAttribute(System.ComponentModel.EditorBrowsableState.Advanced)]
    [System.ServiceModel.MessageContractAttribute(WrapperName="Purchase", WrapperNamespace="http://shopping/", IsWrapped=true)]
    public partial class PurchaseRequest {
        
        [System.ServiceModel.MessageBodyMemberAttribute(Namespace="http://shopping/", Order=0)]
        [System.Xml.Serialization.XmlElementAttribute(Form=System.Xml.Schema.XmlSchemaForm.Unqualified)]
        public string arg0;
        
        [System.ServiceModel.MessageBodyMemberAttribute(Namespace="http://shopping/", Order=1)]
        [System.Xml.Serialization.XmlElementAttribute(Form=System.Xml.Schema.XmlSchemaForm.Unqualified)]
        public int arg1;
        
        public PurchaseRequest() {
        }
        
        public PurchaseRequest(string arg0, int arg1) {
            this.arg0 = arg0;
            this.arg1 = arg1;
        }
    }
    
    [System.Diagnostics.DebuggerStepThroughAttribute()]
    [System.CodeDom.Compiler.GeneratedCodeAttribute("System.ServiceModel", "4.0.0.0")]
    [System.ComponentModel.EditorBrowsableAttribute(System.ComponentModel.EditorBrowsableState.Advanced)]
    [System.ServiceModel.MessageContractAttribute(WrapperName="PurchaseResponse", WrapperNamespace="http://shopping/", IsWrapped=true)]
    public partial class PurchaseResponse {
        
        [System.ServiceModel.MessageBodyMemberAttribute(Namespace="http://shopping/", Order=0)]
        [System.Xml.Serialization.XmlElementAttribute(Form=System.Xml.Schema.XmlSchemaForm.Unqualified)]
        public WpfClientApp.Shopping.Receipt @return;
        
        public PurchaseResponse() {
        }
        
        public PurchaseResponse(WpfClientApp.Shopping.Receipt @return) {
            this.@return = @return;
        }
    }
    
    [System.CodeDom.Compiler.GeneratedCodeAttribute("System.ServiceModel", "4.0.0.0")]
    public interface CustomerSupportChannel : WpfClientApp.Shopping.CustomerSupport, System.ServiceModel.IClientChannel {
    }
    
    [System.Diagnostics.DebuggerStepThroughAttribute()]
    [System.CodeDom.Compiler.GeneratedCodeAttribute("System.ServiceModel", "4.0.0.0")]
    public partial class CustomerSupportClient : System.ServiceModel.ClientBase<WpfClientApp.Shopping.CustomerSupport>, WpfClientApp.Shopping.CustomerSupport {
        
        public CustomerSupportClient() {
        }
        
        public CustomerSupportClient(string endpointConfigurationName) : 
                base(endpointConfigurationName) {
        }
        
        public CustomerSupportClient(string endpointConfigurationName, string remoteAddress) : 
                base(endpointConfigurationName, remoteAddress) {
        }
        
        public CustomerSupportClient(string endpointConfigurationName, System.ServiceModel.EndpointAddress remoteAddress) : 
                base(endpointConfigurationName, remoteAddress) {
        }
        
        public CustomerSupportClient(System.ServiceModel.Channels.Binding binding, System.ServiceModel.EndpointAddress remoteAddress) : 
                base(binding, remoteAddress) {
        }
        
        [System.ComponentModel.EditorBrowsableAttribute(System.ComponentModel.EditorBrowsableState.Advanced)]
        WpfClientApp.Shopping.InquireResponse WpfClientApp.Shopping.CustomerSupport.Inquire(WpfClientApp.Shopping.InquireRequest request) {
            return base.Channel.Inquire(request);
        }
        
        public int Inquire(string arg0) {
            WpfClientApp.Shopping.InquireRequest inValue = new WpfClientApp.Shopping.InquireRequest();
            inValue.arg0 = arg0;
            WpfClientApp.Shopping.InquireResponse retVal = ((WpfClientApp.Shopping.CustomerSupport)(this)).Inquire(inValue);
            return retVal.@return;
        }
        
        [System.ComponentModel.EditorBrowsableAttribute(System.ComponentModel.EditorBrowsableState.Advanced)]
        System.Threading.Tasks.Task<WpfClientApp.Shopping.InquireResponse> WpfClientApp.Shopping.CustomerSupport.InquireAsync(WpfClientApp.Shopping.InquireRequest request) {
            return base.Channel.InquireAsync(request);
        }
        
        public System.Threading.Tasks.Task<WpfClientApp.Shopping.InquireResponse> InquireAsync(string arg0) {
            WpfClientApp.Shopping.InquireRequest inValue = new WpfClientApp.Shopping.InquireRequest();
            inValue.arg0 = arg0;
            return ((WpfClientApp.Shopping.CustomerSupport)(this)).InquireAsync(inValue);
        }
        
        [System.ComponentModel.EditorBrowsableAttribute(System.ComponentModel.EditorBrowsableState.Advanced)]
        WpfClientApp.Shopping.PurchaseResponse WpfClientApp.Shopping.CustomerSupport.Purchase(WpfClientApp.Shopping.PurchaseRequest request) {
            return base.Channel.Purchase(request);
        }
        
        public WpfClientApp.Shopping.Receipt Purchase(string arg0, int arg1) {
            WpfClientApp.Shopping.PurchaseRequest inValue = new WpfClientApp.Shopping.PurchaseRequest();
            inValue.arg0 = arg0;
            inValue.arg1 = arg1;
            WpfClientApp.Shopping.PurchaseResponse retVal = ((WpfClientApp.Shopping.CustomerSupport)(this)).Purchase(inValue);
            return retVal.@return;
        }
        
        [System.ComponentModel.EditorBrowsableAttribute(System.ComponentModel.EditorBrowsableState.Advanced)]
        System.Threading.Tasks.Task<WpfClientApp.Shopping.PurchaseResponse> WpfClientApp.Shopping.CustomerSupport.PurchaseAsync(WpfClientApp.Shopping.PurchaseRequest request) {
            return base.Channel.PurchaseAsync(request);
        }
        
        public System.Threading.Tasks.Task<WpfClientApp.Shopping.PurchaseResponse> PurchaseAsync(string arg0, int arg1) {
            WpfClientApp.Shopping.PurchaseRequest inValue = new WpfClientApp.Shopping.PurchaseRequest();
            inValue.arg0 = arg0;
            inValue.arg1 = arg1;
            return ((WpfClientApp.Shopping.CustomerSupport)(this)).PurchaseAsync(inValue);
        }
    }
}