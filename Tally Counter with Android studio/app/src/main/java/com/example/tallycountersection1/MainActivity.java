package com.example.tallycountersection1;

import androidx.appcompat.app.AppCompatActivity;

import android.os.Bundle;
import android.view.View;
import android.widget.Button;
import android.widget.TextView;

public class MainActivity extends AppCompatActivity {

      private TextView txt;
      private Button   incbtn;
      private Button   decbtn;
      private Button   resetbtn;

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_main);
      //calling UI creator GO BURN ashf 3al beeeaaatttt
        Set_UI();
        incbtn.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View view) {
                String con= Integer.toString(Integer.parseInt(txt.getText().toString())+1) ;
                txt.setText(con);
            }
        });
        decbtn.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View view) {
                if (Integer.parseInt(txt.getText().toString())>0) {
                    String con = Integer.toString(Integer.parseInt(txt.getText().toString()) - 1);
                    txt.setText(con);
                }
            }
        });
    }

    public  void resettxt(View view){
        txt.setText("0");
    }

    private void Set_UI(){
        txt= findViewById(R.id.txt);
        incbtn=findViewById(R.id.inc);
        decbtn=findViewById(R.id.dec);
        resetbtn=findViewById(R.id.reset);
    }
}