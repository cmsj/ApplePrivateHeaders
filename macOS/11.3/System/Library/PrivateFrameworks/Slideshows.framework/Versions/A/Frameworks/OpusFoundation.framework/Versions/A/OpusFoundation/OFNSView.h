/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:52 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/Slideshows.framework/Versions/A/Frameworks/OpusFoundation.framework/Versions/A/OpusFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OpusFoundation/OpusFoundation-Structs.h>
#import <OpusFoundation/OFViewProxy.h>

@interface OFNSView : OFViewProxy {

	char _clipsToBounds;
	char _userInteractionEnabled;
	char _opaque;

}

@property (assign,nonatomic) char clipsToBounds;                       //@synthesize clipsToBounds=_clipsToBounds - In the implementation block
@property (assign,nonatomic) char userInteractionEnabled;              //@synthesize userInteractionEnabled=_userInteractionEnabled - In the implementation block
-(void)dealloc;
-(void)layout;
-(char)isFlipped;
-(char)isOpaque;
-(char)wantsUpdateLayer;
-(void)updateLayer;
-(char)wantsDefaultClipping;
-(char)clipsToBounds;
-(id)hitTest:(CGPoint)arg1 ;
-(void)setOpaque:(char)arg1 ;
-(void)layoutIfNeeded;
-(char)opaque;
-(void)setClipsToBounds:(char)arg1 ;
-(void)beginGestureWithEvent:(id)arg1 ;
-(void)endGestureWithEvent:(id)arg1 ;
-(void)commonInit;
-(char)userInteractionEnabled;
-(void)setUserInteractionEnabled:(char)arg1 ;
@end

