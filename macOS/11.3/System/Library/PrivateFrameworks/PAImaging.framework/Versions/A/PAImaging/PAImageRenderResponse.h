/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:39 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/PAImaging.framework/Versions/A/PAImaging
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PAImaging/PAMultipleImageRenderResponse.h>

@class NSArray, NSError, NSPointerArray, PACGImage, NSString;

@interface PAImageRenderResponse : NSObject <PAMultipleImageRenderResponse> {

	NSPointerArray* _images;
	NSError* _error;

}

@property (readonly) unsigned long long imageCount; 
@property (retain) PACGImage * image; 
@property (retain) NSError * error;                                 //@synthesize error=_error - In the implementation block
@property (readonly) NSArray * images; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)description;
-(NSError *)error;
-(void)setError:(NSError *)arg1 ;
-(void)setImage:(PACGImage *)arg1 ;
-(char)isComplete;
-(PACGImage *)image;
-(void)setImage:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(id)imageAtIndex:(unsigned long long)arg1 ;
-(NSArray *)images;
-(unsigned long long)imageCount;
-(id)initWithImageCount:(unsigned long long)arg1 ;
@end

