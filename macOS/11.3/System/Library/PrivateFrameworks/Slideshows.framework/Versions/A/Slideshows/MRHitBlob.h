/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:40 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/Slideshows.framework/Versions/A/Slideshows
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MRSlidePositionSupport;
#import <Slideshows/Slideshows-Structs.h>
@class MRLayer, MRLayerEffect, NSString;

@interface MRHitBlob : NSObject {

	unsigned char _currentLayoutIndex;
	MRLayer* _outerLayer;
	MRLayerEffect* _effectLayer;
	NSString* _innerPath;
	NSString* _elementID;
	id _clientObject;
	id<MRSlidePositionSupport> _proxyForSlide;

}

@property (retain) MRLayer * outerLayer;                                    //@synthesize outerLayer=_outerLayer - In the implementation block
@property (retain) MRLayerEffect * effectLayer;                             //@synthesize effectLayer=_effectLayer - In the implementation block
@property (copy) NSString * innerPath;                                      //@synthesize innerPath=_innerPath - In the implementation block
@property (copy) NSString * elementID;                                      //@synthesize elementID=_elementID - In the implementation block
@property (retain) id clientObject;                                         //@synthesize clientObject=_clientObject - In the implementation block
@property (readonly) NSString * mediaType; 
@property (readonly) double aspectRatio; 
@property (readonly) CGSize innerResolution; 
@property (assign) id<MRSlidePositionSupport> proxyForSlide;                //@synthesize proxyForSlide=_proxyForSlide - In the implementation block
@property (assign,nonatomic) unsigned char currentLayoutIndex;              //@synthesize currentLayoutIndex=_currentLayoutIndex - In the implementation block
-(double)aspectRatio;
-(NSString *)mediaType;
-(NSString *)elementID;
-(MRLayerEffect *)effectLayer;
-(void)setEffectLayer:(MRLayerEffect *)arg1 ;
-(unsigned char)currentLayoutIndex;
-(void)setCurrentLayoutIndex:(unsigned char)arg1 ;
-(void)setOuterLayer:(MRLayer *)arg1 ;
-(void)setClientObject:(id)arg1 ;
-(void)setInnerPath:(NSString *)arg1 ;
-(void)setElementID:(NSString *)arg1 ;
-(MRLayer *)outerLayer;
-(id<MRSlidePositionSupport>)proxyForSlide;
-(id)clientObject;
-(NSString *)innerPath;
-(CGSize)innerResolution;
-(char)isEqualToHitBlob:(id)arg1 ;
-(void)setProxyForSlide:(id<MRSlidePositionSupport>)arg1 ;
@end

