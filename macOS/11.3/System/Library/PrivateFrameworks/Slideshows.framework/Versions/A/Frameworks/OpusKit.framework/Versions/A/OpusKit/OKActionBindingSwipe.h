/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:52 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/Slideshows.framework/Versions/A/Frameworks/OpusKit.framework/Versions/A/OpusKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OpusKit/OKActionBinding.h>

@interface OKActionBindingSwipe : OKActionBinding {

	unsigned long long _numberOfTouchesRequired;
	unsigned long long _direction;

}

@property (assign,nonatomic) unsigned long long numberOfTouchesRequired;              //@synthesize numberOfTouchesRequired=_numberOfTouchesRequired - In the implementation block
@property (assign,nonatomic) unsigned long long direction;                            //@synthesize direction=_direction - In the implementation block
+(id)supportedSettings;
-(void)dealloc;
-(id)init;
-(void)unload;
-(unsigned long long)direction;
-(unsigned long long)numberOfTouchesRequired;
-(void)setNumberOfTouchesRequired:(unsigned long long)arg1 ;
-(void)setDirection:(unsigned long long)arg1 ;
-(id)initWithSettings:(id)arg1 ;
-(id)settingObjectForKey:(id)arg1 ;
-(char)ownsGestureRecognizer:(id)arg1 ;
-(void)loadForResponder:(id)arg1 scope:(unsigned long long)arg2 ;
-(char)respondsToAction:(id)arg1 isTouchCountAgnostic:(char)arg2 ;
@end
