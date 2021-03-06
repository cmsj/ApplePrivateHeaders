/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:58 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/Quartz.framework/Versions/A/Frameworks/QuartzComposer.framework/Versions/A/QuartzComposer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <QuartzComposer/QuartzComposer-Structs.h>
@class NSMutableArray, NSMutableDictionary, QCSCN_EdgeAntialiasingOptions, NSString;

@interface QCSCN_GeometryReserved : NSObject {

	_C3DScene* _sceneRef;
	_C3DGeometry* _geometry;
	unsigned _presentationInstance : 1;
	NSMutableArray* _materials;
	NSMutableDictionary* _animations;
	QCSCN_EdgeAntialiasingOptions* _edgeAntialiasing;
	NSString* _name;
	NSString* _identifier;

}
-(void)finalize;
-(void)dealloc;
@end

