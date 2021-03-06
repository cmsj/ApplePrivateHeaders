/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:38 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/MonitorPanel.framework/Versions/A/MonitorPanel
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <MonitorPanel/MonitorPanel-Structs.h>
@class MPDisplay, NSString, NSNumber;

@interface MPDisplayMode : NSObject {

	MPDisplay* _display;
	CGSDisplayModeDescription _desc;
	NSString* _rateString;
	unsigned _tvMode;

}

@property (readonly) MPDisplay * display;                                     //@synthesize display=_display - In the implementation block
@property (readonly) CGSDisplayModeDescription* modeDescription; 
@property (readonly) NSString * resolutionString; 
@property (readonly) int modeNumber; 
@property (readonly) int width; 
@property (readonly) int height; 
@property (readonly) int pixelsWide; 
@property (readonly) int pixelsHigh; 
@property (readonly) int horizDPI; 
@property (readonly) int vertDPI; 
@property (readonly) int dotsPerInch; 
@property (readonly) int refreshRate; 
@property (readonly) int fixPtRefreshRate; 
@property (readonly) float aspectRatio; 
@property (readonly) float scale; 
@property (readonly) int roundedScanRate; 
@property (readonly) NSNumber * scanRate; 
@property (readonly) char isHiDPI; 
@property (readonly) char isRetina; 
@property (readonly) char isUserVisible; 
@property (readonly) char isStretched; 
@property (readonly) char isDefaultMode; 
@property (readonly) char isNativeMode; 
@property (readonly) char isInterlaced; 
@property (readonly) char isSafeMode; 
@property (readonly) char isSimulscan; 
@property (readonly) char isTVMode; 
@property (readonly) unsigned tvMode; 
@property (readonly) unsigned tvModeEquiv; 
@property (readonly) NSString * refreshString; 
+(id)modeWithDescription:(CGSDisplayModeDescription*)arg1 forDisplay:(id)arg2 ;
-(void)dealloc;
-(id)description;
-(int)width;
-(int)height;
-(float)scale;
-(MPDisplay *)display;
-(int)pixelsHigh;
-(int)pixelsWide;
-(char)isStretched;
-(float)aspectRatio;
-(int)refreshRate;
-(NSNumber *)scanRate;
-(char)isUserVisible;
-(char)isHiDPI;
-(CGSDisplayModeDescription*)modeDescription;
-(char)isRetina;
-(char)isDefaultMode;
-(id)initWithModeDescription:(CGSDisplayModeDescription*)arg1 forDisplay:(id)arg2 ;
-(char)isTVMode;
-(char)resolutionMatches:(CGSDisplayModeDescription*)arg1 ;
-(int)roundedScanRate;
-(unsigned)tvMode;
-(char)isInterlaced;
-(char)isSimulscan;
-(id)resolutionFormat;
-(int)fixPtRefreshRate;
-(int)modeNumber;
-(int)horizDPI;
-(int)vertDPI;
-(int)dotsPerInch;
-(char)isNativeMode;
-(unsigned)tvModeEquiv;
-(char)modeResolutionMatches:(id)arg1 ;
-(void)getModeDescription:(CGSDisplayModeDescription*)arg1 ;
-(char)isSafeMode;
-(NSString *)resolutionString;
-(NSString *)refreshString;
@end

