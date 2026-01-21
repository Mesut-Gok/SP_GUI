#pragma once

namespace SPGUI {

    using namespace System;
    using namespace System::Windows::Forms;

    public ref class KeyForm : public Form
    {
    public:
        KeyForm(void)
        {
            InitializeComponent();
        }

        String^ GetKey()
        {
            return textBoxKey->Text;
        }

    private:
        TextBox^ textBoxKey;
        Button^ buttonOK;
        Button^ buttonCancel;

        void InitializeComponent(void)
        {
            this->textBoxKey = gcnew TextBox();
            this->buttonOK = gcnew Button();
            this->buttonCancel = gcnew Button();

            // TextBox
            this->textBoxKey->Location = System::Drawing::Point(20, 20);
            this->textBoxKey->Width = 200;

            // OK Button
            this->buttonOK->Text = "OK";
            this->buttonOK->Location = System::Drawing::Point(20, 60);
            this->buttonOK->DialogResult = System::Windows::Forms::DialogResult::OK;

            // Cancel Button
            this->buttonCancel->Text = "Cancel";
            this->buttonCancel->Location = System::Drawing::Point(120, 60);
            this->buttonCancel->DialogResult = System::Windows::Forms::DialogResult::Cancel;

            // Form
            this->Controls->Add(this->textBoxKey);
            this->Controls->Add(this->buttonOK);
            this->Controls->Add(this->buttonCancel);
            this->Text = "Enter Key";
            this->Size = System::Drawing::Size(260, 150);
        }
    };
}
