/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:02 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/CoreData.framework/Versions/A/CoreData
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreData/CoreData-Structs.h>
#import <CoreData/_PFAbstractString.h>

@interface _PFEncodedString : _PFAbstractString {

	int _cd_rc;
	unsigned _length;
	id _sourceData;

}
-(id)retain;
-(oneway void)release;
-(unsigned long long)retainCount;
-(char)_tryRetain;
-(char)_isDeallocating;
-(id)copy;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)init;
-(unsigned long long)length;
-(const char*)UTF8String;
-(unsigned short)characterAtIndex:(unsigned long long)arg1 ;
-(void)getCharacters:(unsigned short*)arg1 range:(NSRange)arg2 ;
-(char)isEqualToString:(id)arg1 ;
-(char)_isCString;
-(unsigned long long)cStringLength;
-(void)getCharacters:(unsigned short*)arg1 ;
-(void)getCString:(char*)arg1 ;
@end

