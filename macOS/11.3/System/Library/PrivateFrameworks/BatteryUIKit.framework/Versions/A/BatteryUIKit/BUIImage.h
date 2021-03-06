/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:20 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/BatteryUIKit.framework/Versions/A/BatteryUIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <BatteryUIKit/BatteryUIKit-Structs.h>
@class NSImage, NSBundle;

@interface BUIImage : NSObject {

	NSImage* _splitBatteryEndImage;
	NSImage* _splitBatteryHeadImage;
	NSImage* _splitBatteryStretchImage;
	NSImage* _batLevelBlackCapLeftImage;
	NSImage* _batLevelBlackCapRightImage;
	NSImage* _batLevelBlackMiddleImage;
	NSImage* _batLevelRedCapLeftImage;
	NSImage* _batLevelRedCapRightImage;
	NSImage* _batLevelRedMiddleImage;
	NSBundle* _bundle;

}

@property (retain) NSImage * splitBatteryEndImage;                    //@synthesize splitBatteryEndImage=_splitBatteryEndImage - In the implementation block
@property (retain) NSImage * splitBatteryHeadImage;                   //@synthesize splitBatteryHeadImage=_splitBatteryHeadImage - In the implementation block
@property (retain) NSImage * splitBatteryStretchImage;                //@synthesize splitBatteryStretchImage=_splitBatteryStretchImage - In the implementation block
@property (retain) NSImage * batLevelBlackCapLeftImage;               //@synthesize batLevelBlackCapLeftImage=_batLevelBlackCapLeftImage - In the implementation block
@property (retain) NSImage * batLevelBlackCapRightImage;              //@synthesize batLevelBlackCapRightImage=_batLevelBlackCapRightImage - In the implementation block
@property (retain) NSImage * batLevelBlackMiddleImage;                //@synthesize batLevelBlackMiddleImage=_batLevelBlackMiddleImage - In the implementation block
@property (retain) NSImage * batLevelRedCapLeftImage;                 //@synthesize batLevelRedCapLeftImage=_batLevelRedCapLeftImage - In the implementation block
@property (retain) NSImage * batLevelRedCapRightImage;                //@synthesize batLevelRedCapRightImage=_batLevelRedCapRightImage - In the implementation block
@property (retain) NSImage * batLevelRedMiddleImage;                  //@synthesize batLevelRedMiddleImage=_batLevelRedMiddleImage - In the implementation block
@property (retain) NSBundle * bundle;                                 //@synthesize bundle=_bundle - In the implementation block
@property (readonly) NSImage * noBatteriesImage; 
@property (readonly) NSImage * batteryChargedImage; 
@property (readonly) NSImage * batteryChargingImage; 
@property (readonly) NSImage * badBatteryImage; 
@property (readonly) NSImage * emptyBatteryImage; 
@property (readonly) NSImage * batteryChimeOutline; 
@property (readonly) NSImage * batteryChimeFill; 
+(id)sharedBUIImageCache;
+(CGSize)imageSizeForParameters:(id)arg1 ;
+(id)batteryImagesForParameters:(id)arg1 ;
-(void)setBundle:(NSBundle *)arg1 ;
-(NSBundle *)bundle;
-(NSImage *)batteryChimeFill;
-(void)loadRedFillImages;
-(void)loadBlackFillImages;
-(NSImage *)noBatteriesImage;
-(NSImage *)batteryChargedImage;
-(NSImage *)batteryChargingImage;
-(NSImage *)badBatteryImage;
-(NSImage *)batteryChimeOutline;
-(id)tintImage:(id)arg1 withColor:(id)arg2 ;
-(id)getPowerChimeJuiceForPercent:(double)arg1 colorCode:(int)arg2 opacity:(double)arg3 ;
-(id)getJuiceMaxWidth:(unsigned long long)arg1 percentCharged:(double)arg2 colorCode:(int)arg3 opacity:(double)arg4 ;
-(NSImage *)emptyBatteryImage;
-(id)_imagesForBattery:(id)arg1 ;
-(NSImage *)splitBatteryEndImage;
-(void)setSplitBatteryEndImage:(NSImage *)arg1 ;
-(NSImage *)splitBatteryHeadImage;
-(void)setSplitBatteryHeadImage:(NSImage *)arg1 ;
-(NSImage *)splitBatteryStretchImage;
-(void)setSplitBatteryStretchImage:(NSImage *)arg1 ;
-(NSImage *)batLevelBlackCapLeftImage;
-(void)setBatLevelBlackCapLeftImage:(NSImage *)arg1 ;
-(NSImage *)batLevelBlackCapRightImage;
-(void)setBatLevelBlackCapRightImage:(NSImage *)arg1 ;
-(NSImage *)batLevelBlackMiddleImage;
-(void)setBatLevelBlackMiddleImage:(NSImage *)arg1 ;
-(NSImage *)batLevelRedCapLeftImage;
-(void)setBatLevelRedCapLeftImage:(NSImage *)arg1 ;
-(NSImage *)batLevelRedCapRightImage;
-(void)setBatLevelRedCapRightImage:(NSImage *)arg1 ;
-(NSImage *)batLevelRedMiddleImage;
-(void)setBatLevelRedMiddleImage:(NSImage *)arg1 ;
@end

