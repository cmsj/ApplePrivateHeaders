/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:17 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/PrototypeTools.framework/Versions/A/PrototypeTools
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PrototypeTools/PrototypeTools-Structs.h>
#import <PrototypeTools/PTSettings.h>

@interface PTSizeSettings : PTSettings {

	double _width;
	double _height;

}

@property (assign,nonatomic) double width;                  //@synthesize width=_width - In the implementation block
@property (assign,nonatomic) double height;                 //@synthesize height=_height - In the implementation block
@property (assign,nonatomic) CGSize sizeValue; 
+(id)settingsControllerModule;
+(char)ignoresKey:(id)arg1 ;
-(void)setWidth:(double)arg1 ;
-(void)setHeight:(double)arg1 ;
-(double)width;
-(double)height;
-(CGSize)sizeValue;
-(id)drillDownSummary;
-(void)setSizeValue:(CGSize)arg1 ;
@end

