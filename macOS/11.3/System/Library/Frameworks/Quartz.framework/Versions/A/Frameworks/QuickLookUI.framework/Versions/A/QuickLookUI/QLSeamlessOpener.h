/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:46 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/Quartz.framework/Versions/A/Frameworks/QuickLookUI.framework/Versions/A/QuickLookUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <QuickLookUI/QuickLookUI-Structs.h>
@class QLSeamlessOpenerReserved, NSAppleEventDescriptor, NSURL, NSArray, NSString;

@interface QLSeamlessOpener : NSObject {

	QLSeamlessOpenerReserved* _reserved;

}

@property (assign) id<QLSeamlessOpenerDelegate> delegate; 
@property (assign) id<QLSeamlessCloserDelegate> closerDelegate; 
@property (assign) unsigned launchFlags; 
@property (copy) NSAppleEventDescriptor * additionalEventParamDescriptor; 
@property (copy) NSURL * applicationURL; 
@property (copy) NSArray * additionalAnimatingItems; 
@property (copy) NSString * searchString; 
@property (assign) const AEDesc* passThruParams; 
+(void)_enableScreenUpdates;
+(void)initialize;
+(id)seamlessOpenerWithDelegate:(id)arg1 ;
+(void)invalidateCloserDelegate:(id)arg1 ;
-(id<QLSeamlessCloserDelegate>)closerDelegate;
-(NSAppleEventDescriptor *)additionalEventParamDescriptor;
-(NSArray *)additionalAnimatingItems;
-(void)_closeTransientWindowWithAnimation:(char)arg1 ;
-(void)_checkToCloseTransientWindowWithAnimation:(char)arg1 ;
-(CGRect)_frameForWID:(unsigned)arg1 ;
-(void)_displayTransientWindowWithTransientImage:(id)arg1 frame:(CGRect)arg2 level:(long long)arg3 ;
-(int)_openItems:(id)arg1 async:(char)arg2 local:(char)arg3 realAppPID:(int)arg4 ;
-(void)setAdditionalAnimatingItems:(NSArray *)arg1 ;
-(const AEDesc*)passThruParams;
-(void)setPassThruParams:(const AEDesc*)arg1 ;
-(void)beginShowingTransientWindow;
-(void)endShowingTransientWindowShouldAnimate:(char)arg1 ;
-(void)openLocalItems:(id)arg1 ;
-(void)dealloc;
-(id)description;
-(id)init;
-(id<QLSeamlessOpenerDelegate>)delegate;
-(void)setDelegate:(id<QLSeamlessOpenerDelegate>)arg1 ;
-(NSString *)searchString;
-(void)setSearchString:(NSString *)arg1 ;
-(void)openLocalItems:(id)arg1 realApplicationPID:(int)arg2 ;
-(NSURL *)applicationURL;
-(void)setApplicationURL:(NSURL *)arg1 ;
-(void)setCloserDelegate:(id<QLSeamlessCloserDelegate>)arg1 ;
-(void)openItems:(id)arg1 ;
-(unsigned)launchFlags;
-(void)setLaunchFlags:(unsigned)arg1 ;
-(void)setAdditionalEventParamDescriptor:(NSAppleEventDescriptor *)arg1 ;
-(int)openItemsSynchronously:(id)arg1 ;
@end

