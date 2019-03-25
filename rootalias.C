// Dung Phan [Forked from Junting Huang. Credit goes to Junting Huang.]

void setRooPlotStyle(RooPlot* frame)
{
  frame->SetMarkerStyle(24);
  frame->SetMarkerSize(1.2);
  frame->SetMarkerColor(kBlack);
  frame->GetYaxis()->SetTitleOffset(1.2);
  frame->GetXaxis()->SetTitleOffset(1.2);
  frame->GetXaxis()->CenterTitle();
  frame->GetYaxis()->CenterTitle();
  frame->GetXaxis()->SetTitleFont(43);
  frame->GetYaxis()->SetTitleFont(43);
  frame->GetXaxis()->SetLabelFont(43);
  frame->GetYaxis()->SetLabelFont(43);
  frame->GetXaxis()->SetLabelSize(28);
  frame->GetYaxis()->SetLabelSize(28);
  frame->GetXaxis()->SetTitleSize(28);
  frame->GetYaxis()->SetTitleSize(28);
  frame->SetTitle("");
}

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

void setH2Style(TH2* h2)
{
  h2->GetYaxis()->SetTitleOffset(1.1);
  h2->GetXaxis()->SetTitleOffset(1.05);
  h2->GetZaxis()->SetTitleOffset(1.2);
  h2->GetXaxis()->CenterTitle();
  h2->GetYaxis()->CenterTitle();
  h2->GetZaxis()->CenterTitle();
  h2->GetXaxis()->SetTitleFont(43);
  h2->GetYaxis()->SetTitleFont(43);
  h2->GetZaxis()->SetTitleFont(43);
  h2->GetXaxis()->SetLabelFont(43);
  h2->GetYaxis()->SetLabelFont(43);
  h2->GetZaxis()->SetLabelFont(43);
  h2->GetXaxis()->SetLabelSize(28);
  h2->GetYaxis()->SetLabelSize(28);
  h2->GetZaxis()->SetLabelSize(28);
  h2->GetXaxis()->SetTitleSize(28);
  h2->GetYaxis()->SetTitleSize(28);
  h2->GetZaxis()->SetTitleSize(28);
  h2->GetYaxis()->SetNdivisions(505, 1);
  h2->GetXaxis()->SetNdivisions(505, 1);
  h2->GetZaxis()->SetNdivisions(505, 1);
  h2->SetTitle("");
}

void setH2ColorStyle()
{
  const Int_t NRGBs = 5;
  const Int_t NCont = 255;

  Double_t stops[NRGBs] = { 0.00, 0.34, 0.61, 0.84, 1.00 };
  Double_t red[NRGBs]   = { 0.00, 0.00, 0.87, 1.00, 0.51 };
  Double_t green[NRGBs] = { 0.00, 0.81, 1.00, 0.20, 0.00 };
  Double_t blue[NRGBs]  = { 0.51, 1.00, 0.12, 0.00, 0.00 };
  TColor::CreateGradientColorTable(NRGBs, stops, red, green, blue, NCont);
  gStyle->SetNumberContours(NCont);
}

void setMargin()
{
  gPad->SetLeftMargin(0.15);
  gPad->SetBottomMargin(0.15);
}
