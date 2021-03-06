/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:44 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/Versions/A/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <OfficeImport/OfficeImport-Structs.h>
@class NSMutableArray;

@interface OADPath : NSObject {

	CGSize mSize;
	NSMutableArray* mElements;
	int mFillMode;
	char mStroked;

}
-(CGSize)size;
-(id)description;
-(id)init;
-(void)setSize:(CGSize)arg1 ;
-(unsigned long long)elementCount;
-(id)elementAtIndex:(unsigned long long)arg1 ;
-(void)setFillMode:(int)arg1 ;
-(int)fillMode;
-(void)addElement:(id)arg1 ;
-(char)stroked;
-(void)setStroked:(char)arg1 ;
@end

