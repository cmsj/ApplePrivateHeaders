/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:45 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/Versions/A/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <OfficeImport/OfficeImport-Structs.h>
@class NSString;

@interface MFPFont : NSObject {

	float mSize;
	int mUnit;
	unsigned mFlags;
	NSString* mName;

}
-(unsigned)flags;
-(float)size;
-(id)name;
-(void)setName:(id)arg1 ;
-(void)setSize:(float)arg1 ;
-(int)unit;
-(void)setUnit:(int)arg1 ;
-(void)setFlags:(unsigned)arg1 ;
-(CTFontRef)createCTFontWithGraphics:(id)arg1 ;
@end

