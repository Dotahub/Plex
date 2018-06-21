#pragma once



#include "TDrawing.h"
#include <string>


	namespace pplex
	{
		using namespace System;
		using namespace System::ComponentModel;
		using namespace System::Collections;
		using namespace System::Windows::Forms;
		using namespace System::Data;
		using namespace System::Drawing;

		/// <summary>
		/// Ñâîäêà äëÿ MyForm
		/// </summary>
		public ref class MyForm : public System::Windows::Forms::Form
		{
		public:
			MyForm(void)
			{
				InitializeComponent();
				//
				//TODO: äîáàâüòå êîä êîíñòğóêòîğà
				//
			}

		protected:
			/// <summary>
			/// Îñâîáîäèòü âñå èñïîëüçóåìûå ğåñóğñû.
			/// </summary>
			~MyForm()
			{
				if (components)
				{
					delete components;
				}
			}
		private: System::Windows::Forms::MenuStrip^  menuStrip;
		private: System::Windows::Forms::ToolStripMenuItem^  ñîçäàòüToolStripMenuItem;
		private: System::Windows::Forms::ToolStripMenuItem^  ëèíèşToolStripMenuItem;
		private: System::Windows::Forms::ToolStripMenuItem^  ñîõğàíèòüĞèñóíîêToolStripMenuItem;
		private: System::Windows::Forms::ToolStripMenuItem^  îòêğûòüĞèñóíîêToolStripMenuItem;
		private: System::Windows::Forms::ToolStripMenuItem^  ñòåğåòüĞèñóíîêToolStripMenuItem;
		private: System::Windows::Forms::ToolStripMenuItem^  ôóíêöèèÏîĞàáîòåÑÏëåêñîìToolStripMenuItem;
		private: System::Windows::Forms::ToolStripMenuItem^  ïåğåìåñòèòüÏëåêñToolStripMenuItem;
		private: System::Windows::Forms::ToolStripMenuItem^  ïåğåìåñòèòüÒî÷êóToolStripMenuItem;

		private: System::Windows::Forms::ToolStripMenuItem^  ïåğåêğàñèòüÏëåêñToolStripMenuItem;
		private: System::Windows::Forms::ToolStripMenuItem^  öâåòĞèñóíêàToolStripMenuItem;
		private: System::Windows::Forms::ToolStripMenuItem^  ÷åğíûéToolStripMenuItem;
		private: System::Windows::Forms::ToolStripMenuItem^  êğàñíûéToolStripMenuItem;
		private: System::Windows::Forms::ToolStripMenuItem^  îğàíæåâûéToolStripMenuItem;
		private: System::Windows::Forms::ToolStripMenuItem^  æåëòûéToolStripMenuItem;
		private: System::Windows::Forms::ToolStripMenuItem^  çåëåíûéToolStripMenuItem;
		private: System::Windows::Forms::ToolStripMenuItem^  ãîëóáîéToolStripMenuItem;
		private: System::Windows::Forms::ToolStripMenuItem^  ñèíèéToolStripMenuItem;
		private: System::Windows::Forms::ToolStripMenuItem^  ôèîëåòîâûéToolStripMenuItem;




		private: System::ComponentModel::IContainer^  components;



		private:
			/// <summary>
			/// Îáÿçàòåëüíàÿ ïåğåìåííàÿ êîíñòğóêòîğà.
			/// </summary>


#pragma region Windows Form Designer generated code
			/// <summary>
			/// Òğåáóåìûé ìåòîä äëÿ ïîääåğæêè êîíñòğóêòîğà — íå èçìåíÿéòå 
			/// ñîäåğæèìîå ıòîãî ìåòîäà ñ ïîìîùüş ğåäàêòîğà êîäà.
			/// </summary>
			void InitializeComponent(void)
			{
				this->menuStrip = (gcnew System::Windows::Forms::MenuStrip());
				this->ñîçäàòüToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
				this->ëèíèşToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
				this->ôóíêöèèÏîĞàáîòåÑÏëåêñîìToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
				this->ïåğåìåñòèòüÏëåêñToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
				this->ïåğåìåñòèòüÒî÷êóToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
				this->ïåğåêğàñèòüÏëåêñToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
				this->ñîõğàíèòüĞèñóíîêToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
				this->îòêğûòüĞèñóíîêToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
				this->ñòåğåòüĞèñóíîêToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
				this->öâåòĞèñóíêàToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
				this->÷åğíûéToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
				this->êğàñíûéToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
				this->îğàíæåâûéToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
				this->æåëòûéToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
				this->çåëåíûéToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
				this->ãîëóáîéToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
				this->ñèíèéToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
				this->ôèîëåòîâûéToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
				this->menuStrip->SuspendLayout();
				this->SuspendLayout();
				// 
				// menuStrip
				// 
				this->menuStrip->ImageScalingSize = System::Drawing::Size(20, 20);
				this->menuStrip->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(6) {
					this->ñîçäàòüToolStripMenuItem,
						this->ôóíêöèèÏîĞàáîòåÑÏëåêñîìToolStripMenuItem, this->ñîõğàíèòüĞèñóíîêToolStripMenuItem, this->îòêğûòüĞèñóíîêToolStripMenuItem,
						this->ñòåğåòüĞèñóíîêToolStripMenuItem, this->öâåòĞèñóíêàToolStripMenuItem
				});
				this->menuStrip->Location = System::Drawing::Point(0, 0);
				this->menuStrip->Name = L"menuStrip";
				this->menuStrip->Padding = System::Windows::Forms::Padding(4, 2, 0, 2);
				this->menuStrip->Size = System::Drawing::Size(868, 24);
				this->menuStrip->TabIndex = 0;
				this->menuStrip->Text = L"menuStrip";
				// 
				// ñîçäàòüToolStripMenuItem
				// 
				this->ñîçäàòüToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->ëèíèşToolStripMenuItem });
				this->ñîçäàòüToolStripMenuItem->Name = L"ñîçäàòüToolStripMenuItem";
				this->ñîçäàòüToolStripMenuItem->Size = System::Drawing::Size(43, 20);
				this->ñîçäàòüToolStripMenuItem->Text = L"Start";
				// 
				// ëèíèşToolStripMenuItem
				// 
				this->ëèíèşToolStripMenuItem->Name = L"ëèíèşToolStripMenuItem";
				this->ëèíèşToolStripMenuItem->Size = System::Drawing::Size(152, 22);
				this->ëèíèşToolStripMenuItem->Text = L"Line";
				this->ëèíèşToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::ëèíèşToolStripMenuItem_Click);
				// 
				// ôóíêöèèÏîĞàáîòåÑÏëåêñîìToolStripMenuItem
				// 
				this->ôóíêöèèÏîĞàáîòåÑÏëåêñîìToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
					this->ïåğåìåñòèòüÏëåêñToolStripMenuItem,
						this->ïåğåìåñòèòüÒî÷êóToolStripMenuItem, this->ïåğåêğàñèòüÏëåêñToolStripMenuItem
				});
				this->ôóíêöèèÏîĞàáîòåÑÏëåêñîìToolStripMenuItem->Name = L"ôóíêöèèÏîĞàáîòåÑÏëåêñîìToolStripMenuItem";
				this->ôóíêöèèÏîĞàáîòåÑÏëåêñîìToolStripMenuItem->Size = System::Drawing::Size(40, 20);
				this->ôóíêöèèÏîĞàáîòåÑÏëåêñîìToolStripMenuItem->Text = L"Plex";
				// 
				// ïåğåìåñòèòüÏëåêñToolStripMenuItem
				// 
				this->ïåğåìåñòèòüÏëåêñToolStripMenuItem->Name = L"ïåğåìåñòèòüÏëåêñToolStripMenuItem";
				this->ïåğåìåñòèòüÏëåêñToolStripMenuItem->Size = System::Drawing::Size(152, 22);
				this->ïåğåìåñòèòüÏëåêñToolStripMenuItem->Text = L"Move Plex";
				this->ïåğåìåñòèòüÏëåêñToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::ïåğåìåñòèòüÏëåêñToolStripMenuItem_Click);
				// 
				// ïåğåìåñòèòüÒî÷êóToolStripMenuItem
				// 
				this->ïåğåìåñòèòüÒî÷êóToolStripMenuItem->Name = L"ïåğåìåñòèòüÒî÷êóToolStripMenuItem";
				this->ïåğåìåñòèòüÒî÷êóToolStripMenuItem->Size = System::Drawing::Size(152, 22);
				this->ïåğåìåñòèòüÒî÷êóToolStripMenuItem->Text = L"Move point";
				this->ïåğåìåñòèòüÒî÷êóToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::ïåğåìåñòèòüÒî÷êóToolStripMenuItem_Click);
				// 
				// ïåğåêğàñèòüÏëåêñToolStripMenuItem
				// 
				this->ïåğåêğàñèòüÏëåêñToolStripMenuItem->Name = L"ïåğåêğàñèòüÏëåêñToolStripMenuItem";
				this->ïåğåêğàñèòüÏëåêñToolStripMenuItem->Size = System::Drawing::Size(152, 22);
				this->ïåğåêğàñèòüÏëåêñToolStripMenuItem->Text = L"Recolor Plex";
				this->ïåğåêğàñèòüÏëåêñToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::ïåğåêğàñèòüÏëåêñToolStripMenuItem_Click);
				// 
				// ñîõğàíèòüĞèñóíîêToolStripMenuItem
				// 
				this->ñîõğàíèòüĞèñóíîêToolStripMenuItem->Name = L"ñîõğàíèòüĞèñóíîêToolStripMenuItem";
				this->ñîõğàíèòüĞèñóíîêToolStripMenuItem->Size = System::Drawing::Size(43, 20);
				this->ñîõğàíèòüĞèñóíîêToolStripMenuItem->Text = L"Save";
				this->ñîõğàíèòüĞèñóíîêToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::ñîõğàíèòüĞèñóíîêToolStripMenuItem_Click);
				// 
				// îòêğûòüĞèñóíîêToolStripMenuItem
				// 
				this->îòêğûòüĞèñóíîêToolStripMenuItem->Name = L"îòêğûòüĞèñóíîêToolStripMenuItem";
				this->îòêğûòüĞèñóíîêToolStripMenuItem->Size = System::Drawing::Size(45, 20);
				this->îòêğûòüĞèñóíîêToolStripMenuItem->Text = L"Load";
				this->îòêğûòüĞèñóíîêToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::îòêğûòüĞèñóíîêToolStripMenuItem_Click);
				// 
				// ñòåğåòüĞèñóíîêToolStripMenuItem
				// 
				this->ñòåğåòüĞèñóíîêToolStripMenuItem->Name = L"ñòåğåòüĞèñóíîêToolStripMenuItem";
				this->ñòåğåòüĞèñóíîêToolStripMenuItem->Size = System::Drawing::Size(46, 20);
				this->ñòåğåòüĞèñóíîêToolStripMenuItem->Text = L"Erase";
				this->ñòåğåòüĞèñóíîêToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::ñòåğåòüĞèñóíîêToolStripMenuItem_Click);
				// 
				// öâåòĞèñóíêàToolStripMenuItem
				// 
				this->öâåòĞèñóíêàToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(8) {
					this->÷åğíûéToolStripMenuItem,
						this->êğàñíûéToolStripMenuItem, this->îğàíæåâûéToolStripMenuItem, this->æåëòûéToolStripMenuItem, this->çåëåíûéToolStripMenuItem,
						this->ãîëóáîéToolStripMenuItem, this->ñèíèéToolStripMenuItem, this->ôèîëåòîâûéToolStripMenuItem
				});
				this->öâåòĞèñóíêàToolStripMenuItem->Name = L"öâåòĞèñóíêàToolStripMenuItem";
				this->öâåòĞèñóíêàToolStripMenuItem->Size = System::Drawing::Size(48, 20);
				this->öâåòĞèñóíêàToolStripMenuItem->Text = L"Color";
				// 
				// ÷åğíûéToolStripMenuItem
				// 
				this->÷åğíûéToolStripMenuItem->Name = L"÷åğíûéToolStripMenuItem";
				this->÷åğíûéToolStripMenuItem->Size = System::Drawing::Size(152, 22);
				this->÷åğíûéToolStripMenuItem->Text = L"Black";
				this->÷åğíûéToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::÷åğíûéToolStripMenuItem_Click);
				// 
				// êğàñíûéToolStripMenuItem
				// 
				this->êğàñíûéToolStripMenuItem->Name = L"êğàñíûéToolStripMenuItem";
				this->êğàñíûéToolStripMenuItem->Size = System::Drawing::Size(152, 22);
				this->êğàñíûéToolStripMenuItem->Text = L"Red";
				this->êğàñíûéToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::êğàñíûéToolStripMenuItem_Click);
				// 
				// îğàíæåâûéToolStripMenuItem
				// 
				this->îğàíæåâûéToolStripMenuItem->Name = L"îğàíæåâûéToolStripMenuItem";
				this->îğàíæåâûéToolStripMenuItem->Size = System::Drawing::Size(152, 22);
				this->îğàíæåâûéToolStripMenuItem->Text = L"Orange";
				this->îğàíæåâûéToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::îğàíæåâûéToolStripMenuItem_Click);
				// 
				// æåëòûéToolStripMenuItem
				// 
				this->æåëòûéToolStripMenuItem->Name = L"æåëòûéToolStripMenuItem";
				this->æåëòûéToolStripMenuItem->Size = System::Drawing::Size(152, 22);
				this->æåëòûéToolStripMenuItem->Text = L"Yellow";
				this->æåëòûéToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::æåëòûéToolStripMenuItem_Click);
				// 
				// çåëåíûéToolStripMenuItem
				// 
				this->çåëåíûéToolStripMenuItem->Name = L"çåëåíûéToolStripMenuItem";
				this->çåëåíûéToolStripMenuItem->Size = System::Drawing::Size(152, 22);
				this->çåëåíûéToolStripMenuItem->Text = L"Green";
				this->çåëåíûéToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::çåëåíûéToolStripMenuItem_Click);
				// 
				// ãîëóáîéToolStripMenuItem
				// 
				this->ãîëóáîéToolStripMenuItem->Name = L"ãîëóáîéToolStripMenuItem";
				this->ãîëóáîéToolStripMenuItem->Size = System::Drawing::Size(152, 22);
				this->ãîëóáîéToolStripMenuItem->Text = L"Light Blue";
				this->ãîëóáîéToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::ãîëóáîéToolStripMenuItem_Click);
				// 
				// ñèíèéToolStripMenuItem
				// 
				this->ñèíèéToolStripMenuItem->Name = L"ñèíèéToolStripMenuItem";
				this->ñèíèéToolStripMenuItem->Size = System::Drawing::Size(152, 22);
				this->ñèíèéToolStripMenuItem->Text = L"Blue";
				this->ñèíèéToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::ñèíèéToolStripMenuItem_Click);
				// 
				// ôèîëåòîâûéToolStripMenuItem
				// 
				this->ôèîëåòîâûéToolStripMenuItem->Name = L"ôèîëåòîâûéToolStripMenuItem";
				this->ôèîëåòîâûéToolStripMenuItem->Size = System::Drawing::Size(152, 22);
				this->ôèîëåòîâûéToolStripMenuItem->Text = L"Violet";
				this->ôèîëåòîâûéToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::ôèîëåòîâûéToolStripMenuItem_Click);
				// 
				// MyForm
				// 
				this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
				this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
				this->ClientSize = System::Drawing::Size(868, 612);
				this->Controls->Add(this->menuStrip);
				this->MainMenuStrip = this->menuStrip;
				this->Margin = System::Windows::Forms::Padding(2);
				this->Name = L"MyForm";
				this->Text = L"Plex";
				this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
				this->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &MyForm::MyForm_KeyDown);
				this->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::MyForm_MouseDown);
				this->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::MyForm_MouseUp);
				this->menuStrip->ResumeLayout(false);
				this->menuStrip->PerformLayout();
				this->ResumeLayout(false);
				this->PerformLayout();

			}
#pragma endregion

			void MarshalString(String ^ s, std::string& os)
			{
				using namespace Runtime::InteropServices;
				const char* chars =
					(const char*)(Marshal::StringToHGlobalAnsi(s)).ToPointer();
				os = chars;
				Marshal::FreeHGlobal(IntPtr((void*)chars));
			}


			Graphics ^g;
			TDrawing *drawing = nullptr;
			int Color = 0;
			int mouseX, mouseY;

			bool readyCreateLine = false;

			bool readyMovePoint = false;
			bool readyMovePlex = false;


		private: System::Void MyForm_Load(System::Object^  sender, System::EventArgs^  e)
		{
			g = CreateGraphics();
			
			drawing = new TDrawing();
		}

		private: System::Void MyForm_KeyDown(System::Object^  sender, System::Windows::Forms::KeyEventArgs^  e)
		{
			if (e->KeyCode == System::Windows::Forms::Keys::Escape)
			{
				readyCreateLine = false;
				readyMovePoint = false;
				readyMovePlex = false;
			}
		}

		private: System::Void ñîõğàíèòüĞèñóíîêToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e)
		{
			SaveFileDialog ^saveFileDialog = gcnew SaveFileDialog();
			saveFileDialog->Filter = "txt files (*.txt)|*.txt|All files (*.*)|*.*";
			saveFileDialog->FilterIndex = 1;
			saveFileDialog->RestoreDirectory = true;

			if (saveFileDialog->ShowDialog() == System::Windows::Forms::DialogResult::OK)
			{
				std::string fileName;
				MarshalString(saveFileDialog->FileName, fileName);

				drawing->save(fileName);
			}
		}

		private: System::Void îòêğûòüĞèñóíîêToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e)
		{
			if (MessageBox::Show(
				"Âû äåéñòâèòåëüíî õîòèòå îòêğûòü íîâûé ğèñóíîê? Ïğè îòêğûòèè íîâîãî ğèñóíêà ïğîèçîéäåò óäàëåíèå òåêóùåãî.",
				"Form Open",
				MessageBoxButtons::YesNo,
				MessageBoxIcon::Warning) == System::Windows::Forms::DialogResult::Yes)
			{
				OpenFileDialog ^openFileDialog = gcnew OpenFileDialog();
				openFileDialog->Filter = "txt files (*.txt)|*.txt|All files (*.*)|*.*";
				openFileDialog->FilterIndex = 1;
				openFileDialog->RestoreDirectory = true;

				if (openFileDialog->ShowDialog() == System::Windows::Forms::DialogResult::OK)
				{
					g->Clear(SystemColors::Control);
					delete drawing;
					drawing = new TDrawing();

					std::string fileName;
					MarshalString(openFileDialog->FileName, fileName);

					drawing->open(fileName);
					drawing->draw(g,Color);
				}
			}
		}

		private: System::Void ñòåğåòüĞèñóíîêToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e)
		{
			if (MessageBox::Show(
				"Âû äåéñòâèòåëüíî õîòèòå ñòåğåòü ğèñóíîê?",
				"Drawing Erase",
				MessageBoxButtons::YesNo,
				MessageBoxIcon::Warning) == System::Windows::Forms::DialogResult::Yes)
			{
				g->Clear(SystemColors::Control);
				delete drawing;
				drawing = new TDrawing();
			}

		}

		private: System::Void ëèíèşToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e)
		{
			readyCreateLine = true;

			readyMovePoint = false;
			readyMovePlex = false;
		}
		private: System::Void MyForm_MouseDown(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e)
		{
			if (e->Button == System::Windows::Forms::MouseButtons::Left && readyCreateLine)
			{
				mouseX = e->X;
				mouseY = e->Y;
			}

			if (e->Button == System::Windows::Forms::MouseButtons::Left && readyMovePoint)
			{
				mouseX = e->X;
				mouseY = e->Y;
			}

			if (e->Button == System::Windows::Forms::MouseButtons::Left && readyMovePlex)
			{
				mouseX = e->X;
				mouseY = e->Y;
			}
		}

		private: System::Void MyForm_MouseUp(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e)
		{
			if (e->Button == System::Windows::Forms::MouseButtons::Left && readyCreateLine)
			{
				drawing->addLine(mouseX, mouseY, e->X, e->Y);

				g->Clear(SystemColors::Control);
				drawing->draw(g,Color);

				mouseX = -1;
				mouseY = -1;
			}

			if (e->Button == System::Windows::Forms::MouseButtons::Left && readyMovePoint)
			{
				int dx = e->X - mouseX;
				int dy = e->Y - mouseY;

				g->Clear(SystemColors::Control);
				drawing->movePoint(mouseX, mouseY, dx, dy);
				drawing->draw(g, Color);

				mouseX = -1;
				mouseY = -1;
			}

			if (e->Button == System::Windows::Forms::MouseButtons::Left && readyMovePlex)
			{
				int dx = e->X - mouseX;
				int dy = e->Y - mouseY;

				g->Clear(SystemColors::Control);
				drawing->moveDrawing(dx, dy);
				drawing->draw(g, Color);

				mouseX = -1;
				mouseY = -1;
			}
		}

		private: System::Void ïåğåìåñòèòüÏëåêñToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e)
		{
			readyMovePlex = true;

			readyCreateLine = false;
			readyMovePoint = false;
		}

	/*	private: System::Void ïîêàçàòüÈìåíàÒî÷åêToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e)
		{
			if (ïîêàçàòüÈìåíàÒî÷åêToolStripMenuItem->Text == "Ïîêàçàòü èìåíà òî÷åê")
			{
				drawing->showPointNames(g);

				ïîêàçàòüÈìåíàÒî÷åêToolStripMenuItem->Text = "Ñêğûòü èìåíà òî÷åê";
			}
			else
			{
				g->Clear(SystemColors::Control);
				drawing->draw(g, Color);

				ïîêàçàòüÈìåíàÒî÷åêToolStripMenuItem->Text = "Ïîêàçàòü èìåíà òî÷åê";
			}

		}*/
		private: System::Void ïåğåêğàñèòüÏëåêñToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e)
		{
			ColorDialog ^colorDialog = gcnew ColorDialog;
			colorDialog->ShowHelp = true;

			if (colorDialog->ShowDialog() == System::Windows::Forms::DialogResult::OK)
			{
				g->Clear(SystemColors::Control);
				drawing->recolor(colorDialog->Color.ToArgb());
				drawing->draw(g, Color);
			}
		}
		private: System::Void ïåğåìåñòèòüÒî÷êóToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e)
		{
			readyMovePoint = true;

			readyCreateLine = false;
			readyMovePlex = false;
		}
		
private: System::Void ÷åğíûéToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	Color = 0;
}
private: System::Void êğàñíûéToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	Color = 1;
}
private: System::Void îğàíæåâûéToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	Color = 2;
}
private: System::Void æåëòûéToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	Color = 3;
}
private: System::Void çåëåíûéToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	Color = 4;
}
private: System::Void ãîëóáîéToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	Color = 5;
}
private: System::Void ñèíèéToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	Color = 6;
}
private: System::Void ôèîëåòîâûéToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	Color = 7;
}
};
	}

