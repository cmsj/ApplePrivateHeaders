/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:04 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/CoreUI.framework/Versions/A/CoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/TXRDataSourceProvider.h>

@protocol TXRBufferAllocator;
@class CUINamedTexture, NSString;

@interface _CUTextureLink : NSObject <TXRDataSourceProvider> {

	CUINamedTexture* _namedTexture;
	id<TXRBufferAllocator> _bufferAllocator;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(id)namedTexture;
-(id)provideTextureInfo;
-(id)bufferAllocator;
-(id)provideImageInfoAtLevel:(unsigned long long)arg1 element:(unsigned long long)arg2 face:(unsigned long long)arg3 ;
-(void)setNamedTexture:(id)arg1 ;
-(void)setBufferAllocator:(id)arg1 ;
@end

