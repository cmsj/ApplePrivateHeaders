/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:17 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/NeutrinoCore.framework/Versions/A/NeutrinoCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NeutrinoCore/NeutrinoCore-Structs.h>
#import <libobjc.A.dylib/NUScalePolicy.h>

@class NSString;

@interface NUFillScalePolicy : NSObject <NUScalePolicy> {

	SCD_Struct_NU8 _size;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)description;
-(id)init;
-(id)initWithTargetSize:(CGSize)arg1 ;
-(SCD_Struct_NU8)scaleForImageSize:(SCD_Struct_NU8)arg1 ;
-(id)initWithTargetPixelSize:(SCD_Struct_NU8)arg1 ;
@end

