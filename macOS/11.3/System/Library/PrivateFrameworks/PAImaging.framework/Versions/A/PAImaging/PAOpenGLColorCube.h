/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:39 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/PAImaging.framework/Versions/A/PAImaging
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSData, NSObject, NSMutableDictionary;

@interface PAOpenGLColorCube : NSObject {

	NSData* _data;
	unsigned _gridSize;
	NSObject*<OS_dispatch_queue> _queue;
	NSMutableDictionary* _texturesByDevice;

}

@property (nonatomic,readonly) unsigned gridPoints;              //@synthesize gridSize=_gridSize - In the implementation block
+(void)initialize;
+(id)identityColorCube;
+(id)_newIdentityColorCube;
+(id)colorCubeFromDisplay:(id)arg1 toDisplay:(id)arg2 ;
+(id)_keyForTransformFromDisplay:(id)arg1 toDisplay:(id)arg2 ;
+(id)_keyForTransformFromProfile:(id)arg1 toProfile:(id)arg2 ;
+(id)_keyForTransformFromProfile:(id)arg1 toProfile:(id)arg2 proofingProfile:(id)arg3 ;
+(id)_lookupColorCubeForKey:(id)arg1 ;
+(void)_setColorCube:(id)arg1 forKey:(id)arg2 ;
-(id)initWithSourceDisplay:(id)arg1 destinationDisplay:(id)arg2 ;
-(id)initWithColorTransform:(id)arg1 ;
-(id)initWithData:(id)arg1 gridSize:(unsigned)arg2 ;
-(id)textureForDevice:(id)arg1 ;
-(id)_textureForDevice:(id)arg1 ;
-(id)_lookupTextureForDevice:(id)arg1 ;
-(id)_newTextureForDevice:(id)arg1 ;
-(void)_setTexture:(id)arg1 forDevice:(id)arg2 ;
-(unsigned)gridPoints;
@end
