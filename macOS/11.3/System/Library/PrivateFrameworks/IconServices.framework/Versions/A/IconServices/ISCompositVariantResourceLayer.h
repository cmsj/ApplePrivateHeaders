/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:07 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/IconServices.framework/Versions/A/IconServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <IconServices/IconServices-Structs.h>
#import <libobjc.A.dylib/ISCompositVariantResourceLayerProtocol.h>

@protocol ISVariantResourceProviderProtocol;
@class NSDictionary, NSString;

@interface ISCompositVariantResourceLayer : NSObject <ISCompositVariantResourceLayerProtocol> {

	NSDictionary* _layerInfo;
	id<ISVariantResourceProviderProtocol> _resourceProvider;

}

@property (retain) NSDictionary * layerInfo;                                            //@synthesize layerInfo=_layerInfo - In the implementation block
@property (__weak) id<ISVariantResourceProviderProtocol> resourceProvider;              //@synthesize resourceProvider=_resourceProvider - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(char)applyToContext:(CGContextRef)arg1 size:(unsigned long long)arg2 scale:(unsigned long long)arg3 ;
-(void)setResourceProvider:(id<ISVariantResourceProviderProtocol>)arg1 ;
-(CGRect)drawingRectForSize:(CGSize)arg1 ;
-(char)isActiveAtSize:(long long)arg1 ;
-(char)maskWithResource:(id)arg1 context:(CGContextRef)arg2 size:(unsigned long long)arg3 scale:(unsigned long long)arg4 ;
-(char)drawResource:(id)arg1 context:(CGContextRef)arg2 size:(unsigned long long)arg3 scale:(unsigned long long)arg4 ;
-(void)drawText:(id)arg1 context:(CGContextRef)arg2 size:(unsigned long long)arg3 scale:(unsigned long long)arg4 ;
-(id)initWithLayerInfo:(id)arg1 resourceProvider:(id)arg2 ;
-(NSDictionary *)layerInfo;
-(void)setLayerInfo:(NSDictionary *)arg1 ;
-(NSString *)description;
-(id<ISVariantResourceProviderProtocol>)resourceProvider;
@end

