/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:04 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/AddressBook.framework/Versions/A/AddressBook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <AddressBook/AddressBook-Structs.h>
@class NSData, NSString;

@interface ABCardViewImage : NSObject {

	NSData* _imageData;
	NSData* _largeImageData;
	CGRect _clippingRect;
	NSString* _imageType;

}

@property (retain) NSData * imageData;                   //@synthesize imageData=_imageData - In the implementation block
@property (retain) NSData * largeImageData;              //@synthesize largeImageData=_largeImageData - In the implementation block
@property (retain) NSString * imageType;                 //@synthesize imageType=_imageType - In the implementation block
@property (assign) CGRect clippingRect;                  //@synthesize clippingRect=_clippingRect - In the implementation block
-(NSString *)imageType;
-(void)setImageData:(NSData *)arg1 ;
-(NSData *)imageData;
-(void)setImageType:(NSString *)arg1 ;
-(NSData *)largeImageData;
-(void)setLargeImageData:(NSData *)arg1 ;
-(id)initWithImageData:(id)arg1 largeImageData:(id)arg2 clippingRect:(CGRect)arg3 imageType:(id)arg4 ;
-(CGRect)clippingRect;
-(void)setClippingRect:(CGRect)arg1 ;
@end

