/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:16 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/MapKit.framework/Versions/A/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <MapKit/MapKit-Structs.h>
@class NSArray, MKMapSnapshotOptions, MKMapSnapshotter, NSAppearance, MKMapCamera;

@interface MKAnnotatedMapSnapshotter : NSObject {

	NSArray* _mapItems;
	CGSize _mapSize;
	MKMapSnapshotOptions* _snapshotOptions;
	char _useSnapshotService;
	MKMapSnapshotter* _snapshotter;
	NSAppearance* _appearance;

}

@property (nonatomic,readonly) MKMapCamera * camera; 
@property (getter=isLoading,nonatomic,readonly) char loading; 
@property (nonatomic,retain) NSAppearance * appearance;                    //@synthesize appearance=_appearance - In the implementation block
-(void)cancel;
-(NSAppearance *)appearance;
-(void)setAppearance:(NSAppearance *)arg1 ;
-(char)isLoading;
-(MKMapCamera *)camera;
-(void)startWithQueue:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)initWithMapItems:(id)arg1 mapSize:(CGSize)arg2 useSnapshotService:(char)arg3 ;
-(void)startWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)_initSnapshotterWithMapItems;
@end

