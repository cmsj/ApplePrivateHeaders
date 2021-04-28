/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:39 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/Geode.framework/Versions/A/Geode
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Geode/Geode-Structs.h>
#import <libobjc.A.dylib/DGConstImageProcessor.h>

@class NSString;

@interface DGGetPixelsProcessor : NSObject <DGConstImageProcessor> {

	PFIntRect_st _destArea;
	void* _destPtr;
	long long _rowBytes;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)processConstArea:(PFIntRect_st)arg1 bufferPtr:(const void*)arg2 rowBytes:(long long)arg3 format:(int)arg4 ;
-(id)initWithArea:(PFIntRect_st)arg1 destPtr:(void*)arg2 rowBytes:(long long)arg3 ;
@end
