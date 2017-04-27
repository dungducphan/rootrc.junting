void setLegendStyle(TLegend* lg)
{
  lg->SetTextFont(43);
  lg->SetTextSize(28);
  lg->SetFillStyle(0);
  lg->SetMargin(0.4);
  lg->SetBorderSize(0);
}

void setGraphStyle(TGraph* gr)
{
  gr->SetMarkerStyle(24);
  gr->SetMarkerSize(1.2);
  gr->SetMarkerColor(kBlack);
  gr->GetYaxis()->SetTitleOffset(1.2);
  gr->GetXaxis()->SetTitleOffset(1.2);
  gr->GetXaxis()->CenterTitle();
  gr->GetYaxis()->CenterTitle();
  gr->GetXaxis()->SetTitleFont(43);
  gr->GetYaxis()->SetTitleFont(43);
  gr->GetXaxis()->SetLabelFont(43);
  gr->GetYaxis()->SetLabelFont(43);
  gr->GetXaxis()->SetLabelSize(28);
  gr->GetYaxis()->SetLabelSize(28);
  gr->GetXaxis()->SetTitleSize(28);
  gr->GetYaxis()->SetTitleSize(28);
  gr->SetTitle("");
}

void setH1Style(TH1* h1)
{
  h1->GetYaxis()->SetTitleOffset(1.3);
  h1->GetXaxis()->SetTitleOffset(1.2);
  h1->GetXaxis()->CenterTitle();
  h1->GetYaxis()->CenterTitle();
  h1->GetXaxis()->SetTitleFont(43);
  h1->GetYaxis()->SetTitleFont(43);
  h1->GetXaxis()->SetLabelFont(43);
  h1->GetYaxis()->SetLabelFont(43);
  h1->GetXaxis()->SetLabelSize(28);
  h1->GetYaxis()->SetLabelSize(28);
  h1->GetXaxis()->SetTitleSize(28);
  h1->GetYaxis()->SetTitleSize(28);
  h1->GetYaxis()->SetNdivisions(505, 1);
  h1->GetXaxis()->SetNdivisions(505, 1);
  h1->SetLineWidth(2);
  h1->SetTitle("");
}

void setMargin()
{
  gPad->SetLeftMargin(0.15);
  gPad->SetBottomMargin(0.15);
}