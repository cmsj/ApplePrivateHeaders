/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:45 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/Versions/A/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OfficeImport/OfficeImport-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSMutableArray;

@interface WDFont : NSObject <NSCopying> {

	NSString* mName;
	NSMutableArray* mAlternateNames;
	int mFontFamily;
	int mCharacterSet;
	int mPitch;

}
+(int)cpFontClassFromWdFontFamily:(int)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)init;
-(id)name;
-(void)setName:(id)arg1 ;
-(id)initWithName:(id)arg1 ;
-(id)alternateNames;
-(void)setPitch:(int)arg1 ;
-(int)pitch;
-(int)fontFamily;
-(void)setFontFamily:(int)arg1 ;
-(int)characterSet;
-(void)setCharacterSet:(int)arg1 ;
-(void)addAlternateName:(id)arg1 ;
-(id)secondName;
@end

