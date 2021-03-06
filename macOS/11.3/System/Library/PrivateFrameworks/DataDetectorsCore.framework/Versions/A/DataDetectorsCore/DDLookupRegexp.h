/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:08 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/DataDetectorsCore.framework/Versions/A/DataDetectorsCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <DataDetectorsCore/DataDetectorsCore-Structs.h>
#import <DataDetectorsCore/DDBasicRegexp.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface DDLookupRegexp : DDBasicRegexp <NSCopying> {

	long long _tokenId;
	NSString* _name;

}
-(int)splitRegexpWithDelegate:(id)arg1 owner:(id)arg2 ;
-(id)prettyPrintWithPriority:(int)arg1 ;
-(void)appendDescriptionToString:(id)arg1 depth:(int)arg2 ;
-(char)acceptEmptyWordWithManager:(id)arg1 ;
-(id)initWithTokenId:(long long)arg1 ;
-(id)symbolsInGrammar:(id)arg1 container:(id)arg2 withManager:(id)arg3 ;
-(id)monElement;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
-(id)name;
-(void)setName:(id)arg1 ;
-(long long)token;
@end

