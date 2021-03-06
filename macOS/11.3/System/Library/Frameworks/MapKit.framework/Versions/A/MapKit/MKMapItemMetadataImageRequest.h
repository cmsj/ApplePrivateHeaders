/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:16 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/MapKit.framework/Versions/A/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MapKit/MKMapItemMetadataRequest.h>

@class GEOPhotoInfo;

@interface MKMapItemMetadataImageRequest : MKMapItemMetadataRequest {

	GEOPhotoInfo* _info;
	/*^block*/id _imageHandler;

}

@property (nonatomic,copy) id imageHandler;                    //@synthesize imageHandler=_imageHandler - In the implementation block
@property (nonatomic,retain) GEOPhotoInfo * info;              //@synthesize info=_info - In the implementation block
+(id)requestWithMapItem:(id)arg1 info:(id)arg2 ;
-(id)url;
-(GEOPhotoInfo *)info;
-(void)setInfo:(GEOPhotoInfo *)arg1 ;
-(void)handleError:(id)arg1 ;
-(void)handleData:(id)arg1 ;
-(void)setImageHandler:(id)arg1 ;
-(id)imageHandler;
@end

