/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:35 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/XQuery.framework/Versions/A/XQuery
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableString;

@interface XQueryElementContentString : NSObject {

	NSMutableString* _string;
	char _isXMLSpace;

}
+(id)stringWithChar:(unsigned short)arg1 ;
+(id)stringWithWhiteSpace:(unsigned short)arg1 ;
-(void)finalize;
-(void)dealloc;
-(id)init;
-(id)string;
-(void)_setXMLSpace:(char)arg1 ;
-(void)addChar:(unsigned short)arg1 ;
-(void)addWhiteSpace:(unsigned short)arg1 ;
-(char)isXMLSpace;
@end

