/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:47 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/FMFUI.framework/Versions/A/FMFUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppKit/NSGestureRecognizer.h>

@interface FMFWildcardGestureRecognizer : NSGestureRecognizer {

	/*^block*/id _pressureCallback;
	/*^block*/id _touchesBeganCallback;
	/*^block*/id _touchesEndedCallback;

}

@property (nonatomic,copy) id pressureCallback;                  //@synthesize pressureCallback=_pressureCallback - In the implementation block
@property (nonatomic,copy) id touchesBeganCallback;              //@synthesize touchesBeganCallback=_touchesBeganCallback - In the implementation block
@property (nonatomic,copy) id touchesEndedCallback;              //@synthesize touchesEndedCallback=_touchesEndedCallback - In the implementation block
-(id)init;
-(void)pressureChangeWithEvent:(id)arg1 ;
-(void)mouseDown:(id)arg1 ;
-(void)mouseUp:(id)arg1 ;
-(void)magnifyWithEvent:(id)arg1 ;
-(id)pressureCallback;
-(void)setPressureCallback:(id)arg1 ;
-(id)touchesBeganCallback;
-(void)setTouchesBeganCallback:(id)arg1 ;
-(id)touchesEndedCallback;
-(void)setTouchesEndedCallback:(id)arg1 ;
@end
