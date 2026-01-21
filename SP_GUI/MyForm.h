#pragma once
#include "KeyForm.h"

namespace SPGUI {

    using namespace System;
    using namespace System::ComponentModel;
    using namespace System::Collections;
    using namespace System::Windows::Forms;
    using namespace System::Data;
    using namespace System::Drawing;

    /// <summary>
    /// Summary for MyForm
    /// </summary>
    public ref class MyForm : public System::Windows::Forms::Form
    {
    public:
        MyForm(void)
        {
            InitializeComponent();
            // TODO: Add the constructor code here
        }

    protected:
        /// <summary>
        /// Clean up any resources being used.
        /// </summary>
        ~MyForm()
        {
            if (components)
            {
                delete components;
            }
        }

    private:
        System::Windows::Forms::MenuStrip^ menuStrip1;
    protected:
    private:
        System::Windows::Forms::ToolStripMenuItem^ fileToolStripMenuItem;
        System::Windows::Forms::ToolStripMenuItem^ openToolStripMenuItem;
        System::Windows::Forms::ToolStripMenuItem^ saveAsToolStripMenuItem;
        System::Windows::Forms::ToolStripMenuItem^ exitToolStripMenuItem;
        System::Windows::Forms::ToolStripMenuItem^ cryptoToolStripMenuItem;
        System::Windows::Forms::ToolStripMenuItem^ setKeyToolStripMenuItem;
        System::Windows::Forms::ToolStripMenuItem^ helpToolStripMenuItem;
        System::Windows::Forms::ToolStripMenuItem^ aboutToolStripMenuItem;
        System::Windows::Forms::TextBox^ textBox1;

        System::ComponentModel::Container^ components;

        String^ cryptoKey = "";

        // ---------------------------------------------------------
        // ✅ XOR Şifreleme Fonksiyonu (MyForm sınıfının içinde)
        // ---------------------------------------------------------
        String^ EncryptDecrypt(String^ text, String^ key)
        {
            String^ result = "";

            for (int i = 0; i < text->Length; i++)
            {
                result += (wchar_t)(text[i] ^ key[i % key->Length]);
            }

            return result;
        }
        // ---------------------------------------------------------

#pragma region Windows Form Designer generated code

        void InitializeComponent(void)
        {
            this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
            this->fileToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
            this->openToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
            this->saveAsToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
            this->exitToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
            this->cryptoToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
            this->setKeyToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
            this->helpToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
            this->aboutToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
            this->textBox1 = (gcnew System::Windows::Forms::TextBox());
            this->menuStrip1->SuspendLayout();
            this->SuspendLayout();

            // menuStrip1
            this->menuStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
            this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^ >(3) {
                this->fileToolStripMenuItem,
                    this->cryptoToolStripMenuItem, this->helpToolStripMenuItem
            });
            this->menuStrip1->Location = System::Drawing::Point(0, 0);
            this->menuStrip1->Name = L"menuStrip1";
            this->menuStrip1->Size = System::Drawing::Size(1019, 28);
            this->menuStrip1->TabIndex = 0;
            this->menuStrip1->Text = L"menuStrip1";

            // fileToolStripMenuItem
            this->fileToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^ >(3) {
                this->openToolStripMenuItem,
                    this->saveAsToolStripMenuItem, this->exitToolStripMenuItem
            });
            this->fileToolStripMenuItem->Name = L"fileToolStripMenuItem";
            this->fileToolStripMenuItem->Size = System::Drawing::Size(46, 24);
            this->fileToolStripMenuItem->Text = L"File";
            this->fileToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::fileToolStripMenuItem_Click);

            // openToolStripMenuItem
            this->openToolStripMenuItem->Name = L"openToolStripMenuItem";
            this->openToolStripMenuItem->Size = System::Drawing::Size(224, 26);
            this->openToolStripMenuItem->Text = L"Open";
            this->openToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::openToolStripMenuItem_Click);

            // saveAsToolStripMenuItem
            this->saveAsToolStripMenuItem->Name = L"saveAsToolStripMenuItem";
            this->saveAsToolStripMenuItem->Size = System::Drawing::Size(224, 26);
            this->saveAsToolStripMenuItem->Text = L"Save As";
            this->saveAsToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::saveAsToolStripMenuItem_Click);

            // exitToolStripMenuItem
            this->exitToolStripMenuItem->Name = L"exitToolStripMenuItem";
            this->exitToolStripMenuItem->Size = System::Drawing::Size(224, 26);
            this->exitToolStripMenuItem->Text = L"Exit";
            this->exitToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::exitToolStripMenuItem_Click);

            // cryptoToolStripMenuItem
            this->cryptoToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^ >(1) {
                this->setKeyToolStripMenuItem
            });
            this->cryptoToolStripMenuItem->Name = L"cryptoToolStripMenuItem";
            this->cryptoToolStripMenuItem->Size = System::Drawing::Size(75, 24);
            this->cryptoToolStripMenuItem->Text = L"Options";
            this->cryptoToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::cryptoToolStripMenuItem_Click);

            // setKeyToolStripMenuItem
            this->setKeyToolStripMenuItem->Name = L"setKeyToolStripMenuItem";
            this->setKeyToolStripMenuItem->Size = System::Drawing::Size(224, 26);
            this->setKeyToolStripMenuItem->Text = L"Set Key";
            this->setKeyToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::setKeyToolStripMenuItem_Click);

            // helpToolStripMenuItem
            this->helpToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^ >(1) {
                this->aboutToolStripMenuItem
            });
            this->helpToolStripMenuItem->Name = L"helpToolStripMenuItem";
            this->helpToolStripMenuItem->Size = System::Drawing::Size(55, 24);
            this->helpToolStripMenuItem->Text = L"Help";
            this->helpToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::helpToolStripMenuItem_Click);

            // aboutToolStripMenuItem
            this->aboutToolStripMenuItem->Name = L"aboutToolStripMenuItem";
            this->aboutToolStripMenuItem->Size = System::Drawing::Size(224, 26);
            this->aboutToolStripMenuItem->Text = L"About";
            this->aboutToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::aboutToolStripMenuItem_Click);

            // textBox1
            this->textBox1->Dock = System::Windows::Forms::DockStyle::Fill;
            this->textBox1->Location = System::Drawing::Point(0, 28);
            this->textBox1->Multiline = true;
            this->textBox1->Name = L"textBox1";
            this->textBox1->ScrollBars = System::Windows::Forms::ScrollBars::Both;
            this->textBox1->Size = System::Drawing::Size(1019, 527);
            this->textBox1->TabIndex = 1;

            // MyForm
            this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
            this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
            this->ClientSize = System::Drawing::Size(1019, 555);
            this->Controls->Add(this->textBox1);
            this->Controls->Add(this->menuStrip1);
            this->MainMenuStrip = this->menuStrip1;
            this->Name = L"MyForm";
            this->Text = L"MyForm";
            this->menuStrip1->ResumeLayout(false);
            this->menuStrip1->PerformLayout();
            this->ResumeLayout(false);
            this->PerformLayout();
        }
#pragma endregion

    private:
        System::Void fileToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {}

        System::Void openToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
        {
            OpenFileDialog^ ofd = gcnew OpenFileDialog();
            ofd->Filter = "Text Files (*.txt)|*.txt|All Files (*.*)|*.*";

            if (ofd->ShowDialog() == System::Windows::Forms::DialogResult::OK)
            {
                String^ content = System::IO::File::ReadAllText(ofd->FileName);
                if (cryptoKey != "") {
                    content = EncryptDecrypt(content, cryptoKey);
                }
                textBox1->Text = content;
            }
        }

        System::Void saveAsToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
        {
            SaveFileDialog^ sfd = gcnew SaveFileDialog();
            sfd->Filter = "Text Files (*.txt)|*.txt|All Files (*.*)|*.*";

            if (sfd->ShowDialog() == System::Windows::Forms::DialogResult::OK)
            {
                String^ content = textBox1->Text;

                if (cryptoKey != "")
                {
                    content = EncryptDecrypt(content, cryptoKey);
                }

                System::IO::File::WriteAllText(sfd->FileName, content);
            }
        }

        System::Void exitToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
        {
            this->Close();
        }

        System::Void cryptoToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {}

        System::Void setKeyToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
        {
            KeyForm^ kf = gcnew KeyForm(); 
            if (kf->ShowDialog() == System::Windows::Forms::DialogResult::OK) { 
                cryptoKey = kf->GetKey(); 
            MessageBox::Show("Key set successfully!"); 
            }
        }

        System::Void helpToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {}

        System::Void aboutToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
        {
            MessageBox::Show("SD1 v1.0\nAuthor: Mesut\nOrganization: VVK");
        }

       };
}


