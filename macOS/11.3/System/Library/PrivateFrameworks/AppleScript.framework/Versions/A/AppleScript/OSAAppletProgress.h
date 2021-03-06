/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:46 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/AppleScript.framework/Versions/A/AppleScript
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <AppleScript/AppleScript-Structs.h>
@class NSWindow, NSProgressIndicator, NSArray, NSProgress, NSString;

@interface OSAAppletProgress : NSObject {

	NSWindow* _progressWindow;
	NSProgressIndicator* _progressIndicator;
	NSArray* _topLevelObjects;
	char _workingOnIt;
	char _wantsStop;
	NSProgress* _progress;
	NSString* _localizedDescription;
	NSString* _localizedAdditionalDescription;
	char _indeterminate;
	float _fractionCompleted;
	ComponentInstanceRecord* _component;

}

@property (retain) NSArray * topLevelObjects;                            //@synthesize topLevelObjects=_topLevelObjects - In the implementation block
@property (copy) NSString * localizedDescription;                        //@synthesize localizedDescription=_localizedDescription - In the implementation block
@property (copy) NSString * localizedAdditionalDescription;              //@synthesize localizedAdditionalDescription=_localizedAdditionalDescription - In the implementation block
@property (getter=isIndeterminate) char indeterminate;                   //@synthesize indeterminate=_indeterminate - In the implementation block
@property (assign) float fractionCompleted;                              //@synthesize fractionCompleted=_fractionCompleted - In the implementation block
@property (retain) NSProgress * progress;                                //@synthesize progress=_progress - In the implementation block
@property (assign) char wantsStop;                                       //@synthesize wantsStop=_wantsStop - In the implementation block
-(NSString *)localizedDescription;
-(float)fractionCompleted;
-(void)finish;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(NSProgress *)progress;
-(char)isIndeterminate;
-(void)setIndeterminate:(char)arg1 ;
-(void)setFractionCompleted:(float)arg1 ;
-(void)setLocalizedDescription:(NSString *)arg1 ;
-(void)setLocalizedAdditionalDescription:(NSString *)arg1 ;
-(NSString *)localizedAdditionalDescription;
-(id)initWithComponent:(ComponentInstanceRecord*)arg1 ;
-(void)stop:(id)arg1 ;
-(NSArray *)topLevelObjects;
-(void)setProgress:(NSProgress *)arg1 ;
-(void)showWindow;
-(void)setTopLevelObjects:(NSArray *)arg1 ;
-(void)setWantsStop:(char)arg1 ;
-(char)wantsStop;
@end

