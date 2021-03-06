/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:25 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/PhotoImaging.framework/Versions/A/PhotoImaging
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotoImaging/PhotoImaging-Structs.h>
#import <NeutrinoCore/NURenderRequest.h>

@class NSDictionary;

@interface PILongExposureRegistrationRequest : NURenderRequest {

	NSDictionary* _recipe;
	SCD_Struct_PI6 _cleanAperture;

}

@property (nonatomic,copy) NSDictionary * recipe;                       //@synthesize recipe=_recipe - In the implementation block
@property (assign,nonatomic) SCD_Struct_PI6 cleanAperture;              //@synthesize cleanAperture=_cleanAperture - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSDictionary *)recipe;
-(void)setRecipe:(NSDictionary *)arg1 ;
-(void)setCleanAperture:(SCD_Struct_PI6)arg1 ;
-(SCD_Struct_PI6)cleanAperture;
-(void)submit:(/*^block*/id)arg1 ;
-(id)newRenderJob;
-(long long)mediaComponentType;
@end

