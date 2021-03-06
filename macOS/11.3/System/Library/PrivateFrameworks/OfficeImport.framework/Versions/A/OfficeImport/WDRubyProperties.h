/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:45 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/Versions/A/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <OfficeImport/OfficeImport-Structs.h>
@interface WDRubyProperties : NSObject {

	unsigned mOriginal : 1;
	SCD_Struct_WD119* mOriginalProperties;

}

@property (assign,nonatomic) int alignment; 
@property (assign,nonatomic) unsigned short phoneticGuideFontSize; 
@property (assign,nonatomic) unsigned short baseFontSize; 
@property (assign,nonatomic) unsigned short distanceBetween; 
@property (assign,nonatomic) int phoneticGuideLanguage; 
-(void)dealloc;
-(id)description;
-(id)init;
-(void)setAlignment:(int)arg1 ;
-(int)alignment;
-(char)isAnythingOverridden;
-(char)isAlignmentOverridden;
-(char)isAnythingOverriddenIn:(SCD_Struct_WD119*)arg1 ;
-(void)clearAlignment;
-(unsigned short)phoneticGuideFontSize;
-(void)setPhoneticGuideFontSize:(unsigned short)arg1 ;
-(char)isPhoneticGuideFontSizeOverridden;
-(void)clearPhoneticGuideFontSize;
-(unsigned short)baseFontSize;
-(void)setBaseFontSize:(unsigned short)arg1 ;
-(char)isBaseFontSizeOverridden;
-(void)clearBaseFontSize;
-(unsigned short)distanceBetween;
-(void)setDistanceBetween:(unsigned short)arg1 ;
-(char)isDistanceBetweenOverridden;
-(void)clearDistanceBetween;
-(int)phoneticGuideLanguage;
-(void)setPhoneticGuideLanguage:(int)arg1 ;
-(char)isPhoneticGuideLanguageOverridden;
-(void)clearPhoneticGuideLanguage;
@end

