/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:56 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/QuickLook/iWork.qlgenerator/Contents/Frameworks/KeynoteQuicklook.framework/Versions/A/KeynoteQuicklook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <KeynoteQuicklook/KeynoteQuicklook-Structs.h>
#import <libobjc.A.dylib/KNPlaybackLayerHost.h>

@class CALayer, NSString;

@interface KNSinglePlaybackLayerHost : NSObject <KNPlaybackLayerHost> {

	CALayer* _containerLayer;
	CALayer* _rootLayer;

}

@property (nonatomic,readonly) CALayer * rootLayer;                 //@synthesize rootLayer=_rootLayer - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(CALayer *)rootLayer;
-(CGRect)convertRootLayerRectToContainer:(CGRect)arg1 ;
-(id)initWithContainerLayer:(id)arg1 ;
@end
