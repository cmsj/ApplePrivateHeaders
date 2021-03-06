/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:41 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/Versions/A/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKitCore/PassKitCore-Structs.h>
#import <QuartzCore/CALayer.h>
#import <libobjc.A.dylib/PKMicaResizableView.h>

@class CALayer, NSDictionary, NSString;

@interface PKMicaLayer : CALayer <PKMicaResizableView> {

	CALayer* _rootLayer;
	NSDictionary* _publishedColorLayers;
	NSDictionary* _publishedColorShapeLayers;

}

@property (nonatomic,readonly) CALayer * rootLayer;                                   //@synthesize rootLayer=_rootLayer - In the implementation block
@property (nonatomic,readonly) NSDictionary * publishedColorLayers;                   //@synthesize publishedColorLayers=_publishedColorLayers - In the implementation block
@property (nonatomic,readonly) NSDictionary * publishedColorShapeLayers;              //@synthesize publishedColorShapeLayers=_publishedColorShapeLayers - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(id)init;
-(id)initWithFrame:(CGRect)arg1 ;
-(CALayer *)rootLayer;
-(void)layoutSublayers;
-(id)initWithFrame:(CGRect)arg1 package:(id)arg2 ;
-(double)pointScaleToMatchBoundsSize:(CGSize)arg1 ;
-(CGSize)boundsSizeToMatchPointScale:(double)arg1 ;
-(NSDictionary *)publishedColorLayers;
-(NSDictionary *)publishedColorShapeLayers;
@end

