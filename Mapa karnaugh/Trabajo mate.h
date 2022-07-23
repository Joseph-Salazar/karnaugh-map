#pragma once

namespace ProjectMapa {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  lblFuncion;
	private: System::Windows::Forms::TextBox^  txtFuncion1;



	private: System::Windows::Forms::Label^  lblHor1;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::Label^  res1;


	private: System::Windows::Forms::Label^  res2;
	private: System::Windows::Forms::Label^  res3;
	private: System::Windows::Forms::Label^  res4;
	private: System::Windows::Forms::Label^  res6;




	private: System::Windows::Forms::Label^  res5;
	private: System::Windows::Forms::Label^  res7;
	private: System::Windows::Forms::Label^  res8;
	private: System::Windows::Forms::Button^  btnSolucion;
	private: System::Windows::Forms::Label^  label11;
	private: System::Windows::Forms::Label^  label10;
	private: System::Windows::Forms::Label^  label12;
	private: System::Windows::Forms::TextBox^  txtFuncion3;

	private: System::Windows::Forms::TextBox^  txtFuncion2;

	private: System::Windows::Forms::Label^  label13;
	private: System::Windows::Forms::Label^  label14;
	private: System::Windows::Forms::Label^  label15;
	private: System::Windows::Forms::Label^  label16;
	private: System::Windows::Forms::Label^  tb1;
	private: System::Windows::Forms::Label^  tb2;
	private: System::Windows::Forms::Label^  tb3;
	private: System::Windows::Forms::Label^  tb4;
	private: System::Windows::Forms::Label^  tb16;
	private: System::Windows::Forms::Label^  tb15;
	private: System::Windows::Forms::Label^  tb14;
	private: System::Windows::Forms::Label^  tb13;
	private: System::Windows::Forms::Label^  tb12;
	private: System::Windows::Forms::Label^  tb11;
	private: System::Windows::Forms::Label^  tb10;
	private: System::Windows::Forms::Label^  tb9;
	private: System::Windows::Forms::Label^  tb8;
	private: System::Windows::Forms::Label^  tb7;
	private: System::Windows::Forms::Label^  tb6;
	private: System::Windows::Forms::Label^  tb5;
	private: System::Windows::Forms::Label^  tb20;
	private: System::Windows::Forms::Label^  tb19;
	private: System::Windows::Forms::Label^  tb18;
	private: System::Windows::Forms::Label^  tb17;
	private: System::Windows::Forms::Label^  tb32;

	private: System::Windows::Forms::Label^  tb31;

	private: System::Windows::Forms::Label^  tb30;

	private: System::Windows::Forms::Label^  tb29;

	private: System::Windows::Forms::Label^  tb24;
	private: System::Windows::Forms::Label^  tb23;
	private: System::Windows::Forms::Label^  tb22;
	private: System::Windows::Forms::Label^  tb21;
	private: System::Windows::Forms::Label^  tb28;

	private: System::Windows::Forms::Label^  tb27;

	private: System::Windows::Forms::Label^  tb26;
	private: System::Windows::Forms::Label^  tb25;
	private: System::Windows::Forms::Button^  btnSolveTabla;
	private: System::Windows::Forms::TextBox^  txtFuncion8;
private: System::Windows::Forms::TextBox^  txtFuncion9;


private: System::Windows::Forms::TextBox^  txtFuncion7;

private: System::Windows::Forms::TextBox^  txtFuncion5;
private: System::Windows::Forms::TextBox^  txtFuncion6;


private: System::Windows::Forms::TextBox^  txtFuncion4;
private: System::Windows::Forms::TextBox^  txtFuncion11;
private: System::Windows::Forms::TextBox^  txtFuncion12;



private: System::Windows::Forms::TextBox^  txtFuncion10;

	private: System::Windows::Forms::Label^  label17;
	private: System::Windows::Forms::Label^  label18;
	private: System::Windows::Forms::Label^  label19;



	protected:

	protected:

	private:
		/// <summary>
		/// Variable del diseñador necesaria.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necesario para admitir el Diseñador. No se puede modificar
		/// el contenido de este método con el editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			this->lblFuncion = (gcnew System::Windows::Forms::Label());
			this->txtFuncion1 = (gcnew System::Windows::Forms::TextBox());
			this->lblHor1 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->res1 = (gcnew System::Windows::Forms::Label());
			this->res2 = (gcnew System::Windows::Forms::Label());
			this->res3 = (gcnew System::Windows::Forms::Label());
			this->res4 = (gcnew System::Windows::Forms::Label());
			this->res6 = (gcnew System::Windows::Forms::Label());
			this->res5 = (gcnew System::Windows::Forms::Label());
			this->res7 = (gcnew System::Windows::Forms::Label());
			this->res8 = (gcnew System::Windows::Forms::Label());
			this->btnSolucion = (gcnew System::Windows::Forms::Button());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->txtFuncion3 = (gcnew System::Windows::Forms::TextBox());
			this->txtFuncion2 = (gcnew System::Windows::Forms::TextBox());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->tb1 = (gcnew System::Windows::Forms::Label());
			this->tb2 = (gcnew System::Windows::Forms::Label());
			this->tb3 = (gcnew System::Windows::Forms::Label());
			this->tb4 = (gcnew System::Windows::Forms::Label());
			this->tb16 = (gcnew System::Windows::Forms::Label());
			this->tb15 = (gcnew System::Windows::Forms::Label());
			this->tb14 = (gcnew System::Windows::Forms::Label());
			this->tb13 = (gcnew System::Windows::Forms::Label());
			this->tb12 = (gcnew System::Windows::Forms::Label());
			this->tb11 = (gcnew System::Windows::Forms::Label());
			this->tb10 = (gcnew System::Windows::Forms::Label());
			this->tb9 = (gcnew System::Windows::Forms::Label());
			this->tb8 = (gcnew System::Windows::Forms::Label());
			this->tb7 = (gcnew System::Windows::Forms::Label());
			this->tb6 = (gcnew System::Windows::Forms::Label());
			this->tb5 = (gcnew System::Windows::Forms::Label());
			this->tb20 = (gcnew System::Windows::Forms::Label());
			this->tb19 = (gcnew System::Windows::Forms::Label());
			this->tb18 = (gcnew System::Windows::Forms::Label());
			this->tb17 = (gcnew System::Windows::Forms::Label());
			this->tb32 = (gcnew System::Windows::Forms::Label());
			this->tb31 = (gcnew System::Windows::Forms::Label());
			this->tb30 = (gcnew System::Windows::Forms::Label());
			this->tb29 = (gcnew System::Windows::Forms::Label());
			this->tb24 = (gcnew System::Windows::Forms::Label());
			this->tb23 = (gcnew System::Windows::Forms::Label());
			this->tb22 = (gcnew System::Windows::Forms::Label());
			this->tb21 = (gcnew System::Windows::Forms::Label());
			this->tb28 = (gcnew System::Windows::Forms::Label());
			this->tb27 = (gcnew System::Windows::Forms::Label());
			this->tb26 = (gcnew System::Windows::Forms::Label());
			this->tb25 = (gcnew System::Windows::Forms::Label());
			this->btnSolveTabla = (gcnew System::Windows::Forms::Button());
			this->txtFuncion8 = (gcnew System::Windows::Forms::TextBox());
			this->txtFuncion9 = (gcnew System::Windows::Forms::TextBox());
			this->txtFuncion7 = (gcnew System::Windows::Forms::TextBox());
			this->txtFuncion5 = (gcnew System::Windows::Forms::TextBox());
			this->txtFuncion6 = (gcnew System::Windows::Forms::TextBox());
			this->txtFuncion4 = (gcnew System::Windows::Forms::TextBox());
			this->txtFuncion11 = (gcnew System::Windows::Forms::TextBox());
			this->txtFuncion12 = (gcnew System::Windows::Forms::TextBox());
			this->txtFuncion10 = (gcnew System::Windows::Forms::TextBox());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// lblFuncion
			// 
			this->lblFuncion->AutoSize = true;
			this->lblFuncion->Location = System::Drawing::Point(13, 13);
			this->lblFuncion->Name = L"lblFuncion";
			this->lblFuncion->Size = System::Drawing::Size(45, 13);
			this->lblFuncion->TabIndex = 0;
			this->lblFuncion->Text = L"Funcion";
			// 
			// txtFuncion1
			// 
			this->txtFuncion1->Location = System::Drawing::Point(64, 10);
			this->txtFuncion1->Name = L"txtFuncion1";
			this->txtFuncion1->Size = System::Drawing::Size(20, 20);
			this->txtFuncion1->TabIndex = 1;
			this->txtFuncion1->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			this->txtFuncion1->TextChanged += gcnew System::EventHandler(this, &MyForm::txtFuncion_TextChanged);
			// 
			// lblHor1
			// 
			this->lblHor1->AutoSize = true;
			this->lblHor1->Location = System::Drawing::Point(61, 92);
			this->lblHor1->Name = L"lblHor1";
			this->lblHor1->Size = System::Drawing::Size(13, 13);
			this->lblHor1->TabIndex = 4;
			this->lblHor1->Text = L"0";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(71, 92);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(13, 13);
			this->label1->TabIndex = 5;
			this->label1->Text = L"0";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(98, 92);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(13, 13);
			this->label2->TabIndex = 7;
			this->label2->Text = L"1";
			this->label2->Click += gcnew System::EventHandler(this, &MyForm::label2_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(87, 92);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(13, 13);
			this->label3->TabIndex = 6;
			this->label3->Text = L"0";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(117, 92);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(13, 13);
			this->label4->TabIndex = 9;
			this->label4->Text = L"1";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(149, 92);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(13, 13);
			this->label5->TabIndex = 8;
			this->label5->Text = L"1";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(160, 92);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(13, 13);
			this->label6->TabIndex = 11;
			this->label6->Text = L"0";
			this->label6->Click += gcnew System::EventHandler(this, &MyForm::label6_Click);
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(128, 92);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(13, 13);
			this->label7->TabIndex = 10;
			this->label7->Text = L"1";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(43, 108);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(13, 13);
			this->label8->TabIndex = 13;
			this->label8->Text = L"0";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(43, 126);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(13, 13);
			this->label9->TabIndex = 12;
			this->label9->Text = L"1";
			// 
			// res1
			// 
			this->res1->AutoSize = true;
			this->res1->Location = System::Drawing::Point(57, 108);
			this->res1->Name = L"res1";
			this->res1->Size = System::Drawing::Size(27, 13);
			this->res1->TabIndex = 14;
			this->res1->Text = L"res1";
			// 
			// res2
			// 
			this->res2->AutoSize = true;
			this->res2->Location = System::Drawing::Point(87, 108);
			this->res2->Name = L"res2";
			this->res2->Size = System::Drawing::Size(27, 13);
			this->res2->TabIndex = 15;
			this->res2->Text = L"res2";
			// 
			// res3
			// 
			this->res3->AutoSize = true;
			this->res3->Location = System::Drawing::Point(117, 108);
			this->res3->Name = L"res3";
			this->res3->Size = System::Drawing::Size(27, 13);
			this->res3->TabIndex = 16;
			this->res3->Text = L"res3";
			this->res3->Click += gcnew System::EventHandler(this, &MyForm::label11_Click);
			// 
			// res4
			// 
			this->res4->AutoSize = true;
			this->res4->Location = System::Drawing::Point(150, 108);
			this->res4->Name = L"res4";
			this->res4->Size = System::Drawing::Size(27, 13);
			this->res4->TabIndex = 17;
			this->res4->Text = L"res4";
			// 
			// res6
			// 
			this->res6->AutoSize = true;
			this->res6->Location = System::Drawing::Point(87, 126);
			this->res6->Name = L"res6";
			this->res6->Size = System::Drawing::Size(27, 13);
			this->res6->TabIndex = 18;
			this->res6->Text = L"res6";
			// 
			// res5
			// 
			this->res5->AutoSize = true;
			this->res5->Location = System::Drawing::Point(57, 126);
			this->res5->Name = L"res5";
			this->res5->Size = System::Drawing::Size(27, 13);
			this->res5->TabIndex = 19;
			this->res5->Text = L"res5";
			// 
			// res7
			// 
			this->res7->AutoSize = true;
			this->res7->Location = System::Drawing::Point(117, 126);
			this->res7->Name = L"res7";
			this->res7->Size = System::Drawing::Size(27, 13);
			this->res7->TabIndex = 20;
			this->res7->Text = L"res7";
			// 
			// res8
			// 
			this->res8->AutoSize = true;
			this->res8->Location = System::Drawing::Point(149, 126);
			this->res8->Name = L"res8";
			this->res8->Size = System::Drawing::Size(27, 13);
			this->res8->TabIndex = 21;
			this->res8->Text = L"res8";
			// 
			// btnSolucion
			// 
			this->btnSolucion->Location = System::Drawing::Point(9, 152);
			this->btnSolucion->Name = L"btnSolucion";
			this->btnSolucion->Size = System::Drawing::Size(75, 23);
			this->btnSolucion->TabIndex = 22;
			this->btnSolucion->Text = L"Mostrar Solucion";
			this->btnSolucion->UseVisualStyleBackColor = true;
			this->btnSolucion->Click += gcnew System::EventHandler(this, &MyForm::btnSolucion_Click);
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(13, 117);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(14, 13);
			this->label11->TabIndex = 24;
			this->label11->Text = L"X";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(110, 75);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(14, 13);
			this->label10->TabIndex = 25;
			this->label10->Text = L"Z";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Location = System::Drawing::Point(88, 74);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(14, 13);
			this->label12->TabIndex = 26;
			this->label12->Text = L"Y";
			// 
			// txtFuncion3
			// 
			this->txtFuncion3->Location = System::Drawing::Point(116, 10);
			this->txtFuncion3->Name = L"txtFuncion3";
			this->txtFuncion3->Size = System::Drawing::Size(20, 20);
			this->txtFuncion3->TabIndex = 27;
			this->txtFuncion3->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			// 
			// txtFuncion2
			// 
			this->txtFuncion2->Location = System::Drawing::Point(90, 10);
			this->txtFuncion2->Name = L"txtFuncion2";
			this->txtFuncion2->Size = System::Drawing::Size(20, 20);
			this->txtFuncion2->TabIndex = 28;
			this->txtFuncion2->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Location = System::Drawing::Point(261, 41);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(14, 13);
			this->label13->TabIndex = 29;
			this->label13->Text = L"X";
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Location = System::Drawing::Point(302, 41);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(14, 13);
			this->label14->TabIndex = 30;
			this->label14->Text = L"Y";
			this->label14->Click += gcnew System::EventHandler(this, &MyForm::label14_Click);
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Location = System::Drawing::Point(343, 41);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(14, 13);
			this->label15->TabIndex = 31;
			this->label15->Text = L"Z";
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Location = System::Drawing::Point(384, 41);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(13, 13);
			this->label16->TabIndex = 32;
			this->label16->Text = L"F";
			// 
			// tb1
			// 
			this->tb1->AutoSize = true;
			this->tb1->Location = System::Drawing::Point(261, 64);
			this->tb1->Name = L"tb1";
			this->tb1->Size = System::Drawing::Size(13, 13);
			this->tb1->TabIndex = 33;
			this->tb1->Text = L"0";
			// 
			// tb2
			// 
			this->tb2->AutoSize = true;
			this->tb2->Location = System::Drawing::Point(302, 64);
			this->tb2->Name = L"tb2";
			this->tb2->Size = System::Drawing::Size(13, 13);
			this->tb2->TabIndex = 34;
			this->tb2->Text = L"0";
			// 
			// tb3
			// 
			this->tb3->AutoSize = true;
			this->tb3->Location = System::Drawing::Point(343, 64);
			this->tb3->Name = L"tb3";
			this->tb3->Size = System::Drawing::Size(13, 13);
			this->tb3->TabIndex = 35;
			this->tb3->Text = L"0";
			// 
			// tb4
			// 
			this->tb4->AutoSize = true;
			this->tb4->Location = System::Drawing::Point(383, 64);
			this->tb4->Name = L"tb4";
			this->tb4->Size = System::Drawing::Size(13, 13);
			this->tb4->TabIndex = 36;
			this->tb4->Text = L"0";
			// 
			// tb16
			// 
			this->tb16->AutoSize = true;
			this->tb16->Location = System::Drawing::Point(383, 132);
			this->tb16->Name = L"tb16";
			this->tb16->Size = System::Drawing::Size(13, 13);
			this->tb16->TabIndex = 40;
			this->tb16->Text = L"0";
			// 
			// tb15
			// 
			this->tb15->AutoSize = true;
			this->tb15->Location = System::Drawing::Point(343, 132);
			this->tb15->Name = L"tb15";
			this->tb15->Size = System::Drawing::Size(13, 13);
			this->tb15->TabIndex = 39;
			this->tb15->Text = L"1";
			// 
			// tb14
			// 
			this->tb14->AutoSize = true;
			this->tb14->Location = System::Drawing::Point(302, 132);
			this->tb14->Name = L"tb14";
			this->tb14->Size = System::Drawing::Size(13, 13);
			this->tb14->TabIndex = 38;
			this->tb14->Text = L"1";
			// 
			// tb13
			// 
			this->tb13->AutoSize = true;
			this->tb13->Location = System::Drawing::Point(261, 132);
			this->tb13->Name = L"tb13";
			this->tb13->Size = System::Drawing::Size(13, 13);
			this->tb13->TabIndex = 37;
			this->tb13->Text = L"0";
			// 
			// tb12
			// 
			this->tb12->AutoSize = true;
			this->tb12->Location = System::Drawing::Point(383, 110);
			this->tb12->Name = L"tb12";
			this->tb12->Size = System::Drawing::Size(13, 13);
			this->tb12->TabIndex = 44;
			this->tb12->Text = L"0";
			// 
			// tb11
			// 
			this->tb11->AutoSize = true;
			this->tb11->Location = System::Drawing::Point(343, 110);
			this->tb11->Name = L"tb11";
			this->tb11->Size = System::Drawing::Size(13, 13);
			this->tb11->TabIndex = 43;
			this->tb11->Text = L"0";
			// 
			// tb10
			// 
			this->tb10->AutoSize = true;
			this->tb10->Location = System::Drawing::Point(302, 110);
			this->tb10->Name = L"tb10";
			this->tb10->Size = System::Drawing::Size(13, 13);
			this->tb10->TabIndex = 42;
			this->tb10->Text = L"1";
			// 
			// tb9
			// 
			this->tb9->AutoSize = true;
			this->tb9->Location = System::Drawing::Point(261, 110);
			this->tb9->Name = L"tb9";
			this->tb9->Size = System::Drawing::Size(13, 13);
			this->tb9->TabIndex = 41;
			this->tb9->Text = L"0";
			// 
			// tb8
			// 
			this->tb8->AutoSize = true;
			this->tb8->Location = System::Drawing::Point(383, 88);
			this->tb8->Name = L"tb8";
			this->tb8->Size = System::Drawing::Size(13, 13);
			this->tb8->TabIndex = 48;
			this->tb8->Text = L"0";
			// 
			// tb7
			// 
			this->tb7->AutoSize = true;
			this->tb7->Location = System::Drawing::Point(343, 88);
			this->tb7->Name = L"tb7";
			this->tb7->Size = System::Drawing::Size(13, 13);
			this->tb7->TabIndex = 47;
			this->tb7->Text = L"1";
			// 
			// tb6
			// 
			this->tb6->AutoSize = true;
			this->tb6->Location = System::Drawing::Point(302, 88);
			this->tb6->Name = L"tb6";
			this->tb6->Size = System::Drawing::Size(13, 13);
			this->tb6->TabIndex = 46;
			this->tb6->Text = L"0";
			// 
			// tb5
			// 
			this->tb5->AutoSize = true;
			this->tb5->Location = System::Drawing::Point(261, 88);
			this->tb5->Name = L"tb5";
			this->tb5->Size = System::Drawing::Size(13, 13);
			this->tb5->TabIndex = 45;
			this->tb5->Text = L"0";
			// 
			// tb20
			// 
			this->tb20->AutoSize = true;
			this->tb20->Location = System::Drawing::Point(382, 154);
			this->tb20->Name = L"tb20";
			this->tb20->Size = System::Drawing::Size(13, 13);
			this->tb20->TabIndex = 52;
			this->tb20->Text = L"0";
			// 
			// tb19
			// 
			this->tb19->AutoSize = true;
			this->tb19->Location = System::Drawing::Point(342, 154);
			this->tb19->Name = L"tb19";
			this->tb19->Size = System::Drawing::Size(13, 13);
			this->tb19->TabIndex = 51;
			this->tb19->Text = L"0";
			// 
			// tb18
			// 
			this->tb18->AutoSize = true;
			this->tb18->Location = System::Drawing::Point(301, 154);
			this->tb18->Name = L"tb18";
			this->tb18->Size = System::Drawing::Size(13, 13);
			this->tb18->TabIndex = 50;
			this->tb18->Text = L"0";
			// 
			// tb17
			// 
			this->tb17->AutoSize = true;
			this->tb17->Location = System::Drawing::Point(260, 154);
			this->tb17->Name = L"tb17";
			this->tb17->Size = System::Drawing::Size(13, 13);
			this->tb17->TabIndex = 49;
			this->tb17->Text = L"1";
			// 
			// tb32
			// 
			this->tb32->AutoSize = true;
			this->tb32->Location = System::Drawing::Point(381, 220);
			this->tb32->Name = L"tb32";
			this->tb32->Size = System::Drawing::Size(13, 13);
			this->tb32->TabIndex = 56;
			this->tb32->Text = L"0";
			// 
			// tb31
			// 
			this->tb31->AutoSize = true;
			this->tb31->Location = System::Drawing::Point(341, 220);
			this->tb31->Name = L"tb31";
			this->tb31->Size = System::Drawing::Size(13, 13);
			this->tb31->TabIndex = 55;
			this->tb31->Text = L"1";
			// 
			// tb30
			// 
			this->tb30->AutoSize = true;
			this->tb30->Location = System::Drawing::Point(300, 220);
			this->tb30->Name = L"tb30";
			this->tb30->Size = System::Drawing::Size(13, 13);
			this->tb30->TabIndex = 54;
			this->tb30->Text = L"1";
			// 
			// tb29
			// 
			this->tb29->AutoSize = true;
			this->tb29->Location = System::Drawing::Point(259, 220);
			this->tb29->Name = L"tb29";
			this->tb29->Size = System::Drawing::Size(13, 13);
			this->tb29->TabIndex = 53;
			this->tb29->Text = L"1";
			// 
			// tb24
			// 
			this->tb24->AutoSize = true;
			this->tb24->Location = System::Drawing::Point(381, 176);
			this->tb24->Name = L"tb24";
			this->tb24->Size = System::Drawing::Size(13, 13);
			this->tb24->TabIndex = 60;
			this->tb24->Text = L"0";
			// 
			// tb23
			// 
			this->tb23->AutoSize = true;
			this->tb23->Location = System::Drawing::Point(341, 176);
			this->tb23->Name = L"tb23";
			this->tb23->Size = System::Drawing::Size(13, 13);
			this->tb23->TabIndex = 59;
			this->tb23->Text = L"1";
			// 
			// tb22
			// 
			this->tb22->AutoSize = true;
			this->tb22->Location = System::Drawing::Point(300, 176);
			this->tb22->Name = L"tb22";
			this->tb22->Size = System::Drawing::Size(13, 13);
			this->tb22->TabIndex = 58;
			this->tb22->Text = L"0";
			// 
			// tb21
			// 
			this->tb21->AutoSize = true;
			this->tb21->Location = System::Drawing::Point(259, 176);
			this->tb21->Name = L"tb21";
			this->tb21->Size = System::Drawing::Size(13, 13);
			this->tb21->TabIndex = 57;
			this->tb21->Text = L"1";
			// 
			// tb28
			// 
			this->tb28->AutoSize = true;
			this->tb28->Location = System::Drawing::Point(382, 197);
			this->tb28->Name = L"tb28";
			this->tb28->Size = System::Drawing::Size(13, 13);
			this->tb28->TabIndex = 64;
			this->tb28->Text = L"0";
			// 
			// tb27
			// 
			this->tb27->AutoSize = true;
			this->tb27->Location = System::Drawing::Point(342, 197);
			this->tb27->Name = L"tb27";
			this->tb27->Size = System::Drawing::Size(13, 13);
			this->tb27->TabIndex = 63;
			this->tb27->Text = L"0";
			this->tb27->Click += gcnew System::EventHandler(this, &MyForm::label46_Click);
			// 
			// tb26
			// 
			this->tb26->AutoSize = true;
			this->tb26->Location = System::Drawing::Point(301, 197);
			this->tb26->Name = L"tb26";
			this->tb26->Size = System::Drawing::Size(13, 13);
			this->tb26->TabIndex = 62;
			this->tb26->Text = L"1";
			// 
			// tb25
			// 
			this->tb25->AutoSize = true;
			this->tb25->Location = System::Drawing::Point(260, 197);
			this->tb25->Name = L"tb25";
			this->tb25->Size = System::Drawing::Size(13, 13);
			this->tb25->TabIndex = 61;
			this->tb25->Text = L"1";
			// 
			// btnSolveTabla
			// 
			this->btnSolveTabla->Location = System::Drawing::Point(423, 36);
			this->btnSolveTabla->Name = L"btnSolveTabla";
			this->btnSolveTabla->Size = System::Drawing::Size(75, 23);
			this->btnSolveTabla->TabIndex = 65;
			this->btnSolveTabla->Text = L"Tabla";
			this->btnSolveTabla->UseVisualStyleBackColor = true;
			this->btnSolveTabla->Click += gcnew System::EventHandler(this, &MyForm::btnSolveTabla_Click);
			// 
			// txtFuncion8
			// 
			this->txtFuncion8->Location = System::Drawing::Point(291, 10);
			this->txtFuncion8->Name = L"txtFuncion8";
			this->txtFuncion8->Size = System::Drawing::Size(20, 20);
			this->txtFuncion8->TabIndex = 68;
			this->txtFuncion8->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			// 
			// txtFuncion9
			// 
			this->txtFuncion9->Location = System::Drawing::Point(317, 10);
			this->txtFuncion9->Name = L"txtFuncion9";
			this->txtFuncion9->Size = System::Drawing::Size(20, 20);
			this->txtFuncion9->TabIndex = 67;
			this->txtFuncion9->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			// 
			// txtFuncion7
			// 
			this->txtFuncion7->Location = System::Drawing::Point(265, 10);
			this->txtFuncion7->Name = L"txtFuncion7";
			this->txtFuncion7->Size = System::Drawing::Size(20, 20);
			this->txtFuncion7->TabIndex = 66;
			this->txtFuncion7->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			// 
			// txtFuncion5
			// 
			this->txtFuncion5->Location = System::Drawing::Point(192, 10);
			this->txtFuncion5->Name = L"txtFuncion5";
			this->txtFuncion5->Size = System::Drawing::Size(20, 20);
			this->txtFuncion5->TabIndex = 71;
			this->txtFuncion5->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			// 
			// txtFuncion6
			// 
			this->txtFuncion6->Location = System::Drawing::Point(218, 10);
			this->txtFuncion6->Name = L"txtFuncion6";
			this->txtFuncion6->Size = System::Drawing::Size(20, 20);
			this->txtFuncion6->TabIndex = 70;
			this->txtFuncion6->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			// 
			// txtFuncion4
			// 
			this->txtFuncion4->Location = System::Drawing::Point(166, 10);
			this->txtFuncion4->Name = L"txtFuncion4";
			this->txtFuncion4->Size = System::Drawing::Size(20, 20);
			this->txtFuncion4->TabIndex = 69;
			this->txtFuncion4->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			// 
			// txtFuncion11
			// 
			this->txtFuncion11->Location = System::Drawing::Point(387, 10);
			this->txtFuncion11->Name = L"txtFuncion11";
			this->txtFuncion11->Size = System::Drawing::Size(20, 20);
			this->txtFuncion11->TabIndex = 74;
			this->txtFuncion11->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			// 
			// txtFuncion12
			// 
			this->txtFuncion12->Location = System::Drawing::Point(413, 10);
			this->txtFuncion12->Name = L"txtFuncion12";
			this->txtFuncion12->Size = System::Drawing::Size(20, 20);
			this->txtFuncion12->TabIndex = 73;
			this->txtFuncion12->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			// 
			// txtFuncion10
			// 
			this->txtFuncion10->Location = System::Drawing::Point(361, 10);
			this->txtFuncion10->Name = L"txtFuncion10";
			this->txtFuncion10->Size = System::Drawing::Size(20, 20);
			this->txtFuncion10->TabIndex = 72;
			this->txtFuncion10->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Location = System::Drawing::Point(143, 13);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(13, 13);
			this->label17->TabIndex = 75;
			this->label17->Text = L"+";
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->Location = System::Drawing::Point(246, 14);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(13, 13);
			this->label18->TabIndex = 76;
			this->label18->Text = L"+";
			// 
			// label19
			// 
			this->label19->AutoSize = true;
			this->label19->Location = System::Drawing::Point(342, 12);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(13, 13);
			this->label19->TabIndex = 77;
			this->label19->Text = L"+";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(521, 292);
			this->Controls->Add(this->label19);
			this->Controls->Add(this->label18);
			this->Controls->Add(this->label17);
			this->Controls->Add(this->txtFuncion11);
			this->Controls->Add(this->txtFuncion12);
			this->Controls->Add(this->txtFuncion10);
			this->Controls->Add(this->txtFuncion5);
			this->Controls->Add(this->txtFuncion6);
			this->Controls->Add(this->txtFuncion4);
			this->Controls->Add(this->txtFuncion8);
			this->Controls->Add(this->txtFuncion9);
			this->Controls->Add(this->txtFuncion7);
			this->Controls->Add(this->btnSolveTabla);
			this->Controls->Add(this->tb28);
			this->Controls->Add(this->tb27);
			this->Controls->Add(this->tb26);
			this->Controls->Add(this->tb25);
			this->Controls->Add(this->tb24);
			this->Controls->Add(this->tb23);
			this->Controls->Add(this->tb22);
			this->Controls->Add(this->tb21);
			this->Controls->Add(this->tb32);
			this->Controls->Add(this->tb31);
			this->Controls->Add(this->tb30);
			this->Controls->Add(this->tb29);
			this->Controls->Add(this->tb20);
			this->Controls->Add(this->tb19);
			this->Controls->Add(this->tb18);
			this->Controls->Add(this->tb17);
			this->Controls->Add(this->tb8);
			this->Controls->Add(this->tb7);
			this->Controls->Add(this->tb6);
			this->Controls->Add(this->tb5);
			this->Controls->Add(this->tb12);
			this->Controls->Add(this->tb11);
			this->Controls->Add(this->tb10);
			this->Controls->Add(this->tb9);
			this->Controls->Add(this->tb16);
			this->Controls->Add(this->tb15);
			this->Controls->Add(this->tb14);
			this->Controls->Add(this->tb13);
			this->Controls->Add(this->tb4);
			this->Controls->Add(this->tb3);
			this->Controls->Add(this->tb2);
			this->Controls->Add(this->tb1);
			this->Controls->Add(this->label16);
			this->Controls->Add(this->label15);
			this->Controls->Add(this->label14);
			this->Controls->Add(this->label13);
			this->Controls->Add(this->txtFuncion2);
			this->Controls->Add(this->txtFuncion3);
			this->Controls->Add(this->label12);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->btnSolucion);
			this->Controls->Add(this->res8);
			this->Controls->Add(this->res7);
			this->Controls->Add(this->res5);
			this->Controls->Add(this->res6);
			this->Controls->Add(this->res4);
			this->Controls->Add(this->res3);
			this->Controls->Add(this->res2);
			this->Controls->Add(this->res1);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->lblHor1);
			this->Controls->Add(this->txtFuncion1);
			this->Controls->Add(this->lblFuncion);
			this->Name = L"MyForm";
			this->Text = L"Mapa de Karnaugh";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void MyForm_Load(System::Object^  sender, System::EventArgs^  e) {
		lblFuncion->Text = "Funcion: ";
		
		res1->Text = "";
		res2->Text = "";
		res3->Text = "";
		res4->Text = "";
		res5->Text = "";
		res6->Text = "";
		res7->Text = "";
		res8->Text = "";
		
		tb4->Text = "";
		
		tb8->Text = "";
		
		tb12->Text = "";
		
		tb16->Text = "";
		
		tb20->Text = "";
		
		tb24->Text = "";
		
		tb28->Text = "";
		
		tb32->Text = "";

	}
	private: System::Void txtFuncion_TextChanged(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void btnMostrar_Click(System::Object^  sender, System::EventArgs^  e) {
		
	}
	private: System::Void lblFunc_Click(System::Object^  sender, System::EventArgs^  e) {
	
	}
private: System::Void label2_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void label6_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void label11_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void btnSolucion_Click(System::Object^  sender, System::EventArgs^  e) {
	if (tb4->Text == "1")
	{
		res1->Text = "1";
	}
	else
	{
		res1->Text = "0";
	}
	if (tb12->Text == "1")
	{
		res2->Text = "1";
	}
	else
	{
		res2->Text = "0";
	}
	if (tb28->Text == "1")
	{
		res3->Text = "1";
	}
	else
	{
		res3->Text = "0";
	}
	if (tb20->Text == "1")
	{
		res4->Text = "1";
	}
	else
	{
		res4->Text = "0";
	}
	if (tb12->Text == "1")
	{
		res2->Text = "1";
	}
	else
	{
		res2->Text = "0";
	}
	if (tb8->Text == "1")
	{
		res5->Text = "1";
	}
	else
	{
		res5->Text = "0";
	}
	if (tb16->Text == "1")
	{
		res6->Text = "1";
	}
	else
	{
		res6->Text = "0";
	}
	if (tb32->Text == "1")
	{
		res7->Text = "1";
	}
	else
	{
		res7->Text = "0";
	}
	if (tb24->Text == "1")
	{
		res8->Text = "1";
	}
	else
	{
		res8->Text = "0";
	}
	
}
private: System::Void label14_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void label46_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void btnSolveTabla_Click(System::Object^  sender, System::EventArgs^  e) {
	if (txtFuncion1->Text == "X" && txtFuncion2->Text == "Y" && txtFuncion3->Text == "Z")
	{
		////X Y Z
		tb32->Text = "1";
	}
	if (txtFuncion1->Text == "X'" && txtFuncion2->Text == "Y" && txtFuncion3->Text == "Z")
	{
		////X' Y Z
		tb16->Text = "1";
	}
	if (txtFuncion1->Text == "X'" && txtFuncion2->Text == "Y" && txtFuncion3->Text == "Z'")
	{
		////X' Y Z'
		tb12->Text = "1";
	}
	if (txtFuncion1->Text == "X" && txtFuncion2->Text == "Y" && txtFuncion3->Text == "Z'")
	{
		////X Y Z'
		tb28->Text = "1";
	}
	if (txtFuncion1->Text == "X'" && txtFuncion2->Text == "Y'" && txtFuncion3->Text == "Z")
	{
		////X' Y' Z
		tb8->Text = "1";
	}
	if (txtFuncion1->Text == "X'" && txtFuncion2->Text == "Y'" && txtFuncion3->Text == "Z'")
	{
		////X' Y' Z'
		tb4->Text = "1";
	}
	if (txtFuncion1->Text == "X" && txtFuncion2->Text == "Y'" && txtFuncion3->Text == "Z'")
	{
		////X Y' Z'
		tb20->Text = "1";
	}
	if (txtFuncion1->Text == "X" && txtFuncion2->Text == "Y'" && txtFuncion3->Text == "Z")
	{
		////X Y' Z
		tb24->Text = "1";
	}
	//Para el segundo bloque de textboxs
	if (txtFuncion4->Text == "X" && txtFuncion5->Text == "Y" && txtFuncion6->Text == "Z")
	{
		////X Y Z
		tb32->Text = "1";
	}
	if (txtFuncion4->Text == "X'" && txtFuncion5->Text == "Y" && txtFuncion6->Text == "Z")
	{
		////X' Y Z
		tb16->Text = "1";
	}
	if (txtFuncion4->Text == "X'" && txtFuncion5->Text == "Y" && txtFuncion6->Text == "Z'")
	{
		////X' Y Z
		tb12->Text = "1";
	}
	if (txtFuncion4->Text == "X" && txtFuncion5->Text == "Y" && txtFuncion6->Text == "Z'")
	{
		////X Y Z'
		tb28->Text = "1";
	}
	if (txtFuncion4->Text == "X'" && txtFuncion5->Text == "Y'" && txtFuncion6->Text == "Z")
	{
		////X' Y' Z
		tb8->Text = "1";
	}
	if (txtFuncion4->Text == "X'" && txtFuncion5->Text == "Y'" && txtFuncion6->Text == "Z'")
	{
		////X' Y' Z'
		tb4->Text = "1";
	}
	if (txtFuncion4->Text == "X" && txtFuncion5->Text == "Y'" && txtFuncion6->Text == "Z'")
	{
		////X Y' Z'
		tb20->Text = "1";
	}
	if (txtFuncion4->Text == "X" && txtFuncion5->Text == "Y'" && txtFuncion6->Text == "Z")
	{
		tb24->Text = "1";
	}
	//Para el tercer bloque de textboxs
	if (txtFuncion7->Text == "X" && txtFuncion8->Text == "Y" && txtFuncion9->Text == "Z")
	{
		////X Y Z
		tb32->Text = "1";
	}
	if (txtFuncion7->Text == "X'" && txtFuncion8->Text == "Y" && txtFuncion9->Text == "Z")
	{
		////X' Y Z
		tb16->Text = "1";
	}
	if (txtFuncion7->Text == "X'" && txtFuncion8->Text == "Y" && txtFuncion9->Text == "Z'")
	{
		////X Y' Z
		tb12->Text = "1";
	}
	if (txtFuncion7->Text == "X" && txtFuncion8->Text == "Y" && txtFuncion9->Text == "Z'")
	{
		////X Y Z'
		tb28->Text = "1";
	}
	if (txtFuncion7->Text == "X'" && txtFuncion8->Text == "Y'" && txtFuncion9->Text == "Z")
	{
		////X' Y' Z
		tb8->Text = "1";
	}
	if (txtFuncion7->Text == "X'" && txtFuncion8->Text == "Y'" && txtFuncion9->Text == "Z'")
	{
		////X' Y' Z'
		tb4->Text = "1";
	}
	if (txtFuncion7->Text == "X" && txtFuncion8->Text == "Y'" && txtFuncion9->Text == "Z'")
	{
		////X Y' Z'
		tb20->Text = "1";
	}
	if (txtFuncion7->Text == "X" && txtFuncion8->Text == "Y'" && txtFuncion9->Text == "Z")
	{
		////X Y' Z
		tb24->Text = "1";
	}
	//Para el cuarto bloque de textboxs
	if (txtFuncion10->Text == "X" && txtFuncion11->Text == "Y" && txtFuncion12->Text == "Z")
	{
		////X Y Z
		tb32->Text = "1";
	}
	if (txtFuncion10->Text == "X'" && txtFuncion11->Text == "Y" && txtFuncion12->Text == "Z")
	{
		////X' Y Z
		tb16->Text = "1";
	}
	if (txtFuncion10->Text == "X'" && txtFuncion11->Text == "Y" && txtFuncion12->Text == "Z'")
	{
		////X Y' Z
		tb12->Text = "1";
	}
	if (txtFuncion10->Text == "X" && txtFuncion11->Text == "Y" && txtFuncion12->Text == "Z'")
	{
		////X Y Z'
		tb28->Text = "1";
	}
	if (txtFuncion10->Text == "X'" && txtFuncion11->Text == "Y'" && txtFuncion12->Text == "Z")
	{
		////X' Y' Z
		tb8->Text = "1";
	}
	if (txtFuncion10->Text == "X'" && txtFuncion11->Text == "Y'" && txtFuncion12->Text == "Z'")
	{
		////X' Y' Z'
		tb4->Text = "1";
	}
	if (txtFuncion10->Text == "X" && txtFuncion11->Text == "Y'" && txtFuncion12->Text == "Z'")
	{
		////X Y' Z'
		tb20->Text = "1";
	}
	if (txtFuncion10->Text == "X" && txtFuncion11->Text == "Y'" && txtFuncion12->Text == "Z")
	{
		////X Y' Z
		tb24->Text = "1";
	}
}
};
}
