class MainForm : public Form
{
    SplitterFactory*  factory;//工厂

public:
    
    MainForm(SplitterFactory*  factory){
        this->factory=factory;
    }
    
	void Button1_Click(){

        //SplitterFactory*  factory = new TxtSplitterFactory(); 不可以放在这里，需要写成成员变量
		ISplitter * splitter=
            factory->CreateSplitter(); //多态new
        
        splitter->split();
	}
};



