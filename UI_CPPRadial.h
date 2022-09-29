// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "Components/Image.h"
#include "UI_CPPRadial.generated.h"

UCLASS()
class RACINGDEV_API UUI_CPPRadial : public UUserWidget
{
	GENERATED_BODY()
	public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (BindWidget))
	class UImage* Image_181;
	UFUNCTION(BlueprintCallable)
	void SetPercent(float Percent, UMaterialInterface* TheMat);
};
