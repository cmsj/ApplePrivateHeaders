/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:29 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/UIKitSystemAppServices.framework/Versions/A/UIKitSystemAppServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitSystemAppServices/UIKitSystemAppServices-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, BKSAnimationFenceHandle;

@interface USSSceneResizeRequest : NSObject <NSSecureCoding> {

	NSString* _identifier;
	double _scale;
	long long _gamut;
	BKSAnimationFenceHandle* _fence;
	CGSize _size;
	NSEdgeInsets _insets;

}

@property (nonatomic,retain) NSString * identifier;                        //@synthesize identifier=_identifier - In the implementation block
@property (assign,nonatomic) CGSize size;                                  //@synthesize size=_size - In the implementation block
@property (assign,nonatomic) double scale;                                 //@synthesize scale=_scale - In the implementation block
@property (assign,nonatomic) long long gamut;                              //@synthesize gamut=_gamut - In the implementation block
@property (assign,nonatomic) NSEdgeInsets insets;                          //@synthesize insets=_insets - In the implementation block
@property (nonatomic,retain) BKSAnimationFenceHandle * fence;              //@synthesize fence=_fence - In the implementation block
+(char)supportsSecureCoding;
+(id)sceneResizeRequestForScene:(id)arg1 size:(CGSize)arg2 scale:(double)arg3 gamut:(long long)arg4 insets:(NSEdgeInsets)arg5 fence:(id)arg6 ;
-(CGSize)size;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)identifier;
-(void)setSize:(CGSize)arg1 ;
-(void)setIdentifier:(NSString *)arg1 ;
-(double)scale;
-(BKSAnimationFenceHandle *)fence;
-(void)setScale:(double)arg1 ;
-(long long)gamut;
-(void)setGamut:(long long)arg1 ;
-(void)setInsets:(NSEdgeInsets)arg1 ;
-(NSEdgeInsets)insets;
-(id)initCommon;
-(void)setFence:(BKSAnimationFenceHandle *)arg1 ;
@end

