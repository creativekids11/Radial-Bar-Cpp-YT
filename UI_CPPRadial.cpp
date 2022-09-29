// Fill out your copyright notice in the Description page of Project Settings.


#include "UI_CPPRadial.h"
#include "Components/Image.h"

void UUI_CPPRadial::SetPercent(float Percent, UMaterialInterface* TheMat) {
	UMaterialInstanceDynamic* DynamicMat = nullptr;
	if (DynamicMat == nullptr) {
		DynamicMat = UMaterialInstanceDynamic::Create(TheMat, this);
	};
	Image_181->SetBrushFromMaterial(DynamicMat);
	DynamicMat->SetScalarParameterValue(TEXT("Percentage"), Percent);
};