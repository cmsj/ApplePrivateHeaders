/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:35 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/Espresso.framework/Versions/A/Espresso
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Espresso/Espresso-Structs.h>
@class NSFileHandle, NSMutableArray;

@interface Espresso_mxnetTools_ImageBinaryRecordReader : NSObject {

	NSFileHandle* _recFileHandle;
	mxnetTools_recordHeader_t_ _recordHeader;
	unsigned long long _currentOffset;
	NSMutableArray* _labelsPrivate;
	mxnetTools_imageHeader_t_ _imageHeader;

}

@property (retain) NSFileHandle * recFileHandle;                         //@synthesize recFileHandle=_recFileHandle - In the implementation block
@property (assign) mxnetTools_recordHeader_t_ recordHeader;              //@synthesize recordHeader=_recordHeader - In the implementation block
@property (assign) mxnetTools_imageHeader_t_ imageHeader;                //@synthesize imageHeader=_imageHeader - In the implementation block
@property (assign) unsigned long long currentOffset;                     //@synthesize currentOffset=_currentOffset - In the implementation block
@property (retain) NSMutableArray * labelsPrivate;                       //@synthesize labelsPrivate=_labelsPrivate - In the implementation block
-(id)labels;
-(void)setCurrentOffset:(unsigned long long)arg1 ;
-(unsigned long long)currentOffset;
-(id)imageData;
-(NSMutableArray *)labelsPrivate;
-(id)initWithRecFile:(id)arg1 error:(id*)arg2 ;
-(char)seekRecordWithID:(mxnetTools_imageID_t_*)arg1 error:(id*)arg2 ;
-(char)nextRecordAndError:(id*)arg1 ;
-(mxnetTools_imageID_t_)imageID;
-(NSFileHandle *)recFileHandle;
-(void)setRecFileHandle:(NSFileHandle *)arg1 ;
-(mxnetTools_recordHeader_t_)recordHeader;
-(void)setRecordHeader:(mxnetTools_recordHeader_t_)arg1 ;
-(mxnetTools_imageHeader_t_)imageHeader;
-(void)setImageHeader:(mxnetTools_imageHeader_t_)arg1 ;
-(void)setLabelsPrivate:(NSMutableArray *)arg1 ;
@end
