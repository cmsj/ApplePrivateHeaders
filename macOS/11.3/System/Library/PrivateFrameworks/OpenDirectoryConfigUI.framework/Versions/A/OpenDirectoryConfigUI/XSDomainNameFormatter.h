/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:50 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/OpenDirectoryConfigUI.framework/Versions/A/OpenDirectoryConfigUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OpenDirectoryConfigUI/OpenDirectoryConfigUI-Structs.h>
#import <OpenDirectoryConfigUI/XSCharacterSetFormatter.h>

@interface XSDomainNameFormatter : XSCharacterSetFormatter {

	char _allowsMultipleValues;
	char _allowsPortSuffix;
	char _allowsWildcardDomains;

}

@property (assign) char allowsMultipleValues;                        //@synthesize allowsMultipleValues=_allowsMultipleValues - In the implementation block
@property (assign) char allowsPortSuffix;                            //@synthesize allowsPortSuffix=_allowsPortSuffix - In the implementation block
@property (assign) char allowsWildcardDomains;                       //@synthesize allowsWildcardDomains=_allowsWildcardDomains - In the implementation block
@property (assign,nonatomic) char allowsWildcardDomain; 
+(id)formatter;
+(id)validCharacters;
+(id)separatorCharacters;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)stringForObjectValue:(id)arg1 ;
-(char)getObjectValue:(id*)arg1 forString:(id)arg2 errorDescription:(id*)arg3 ;
-(char)isPartialStringValid:(id*)arg1 proposedSelectedRange:(NSRange*)arg2 originalString:(id)arg3 originalSelectedRange:(NSRange)arg4 errorDescription:(id*)arg5 ;
-(char)isStringValid:(id)arg1 ;
-(char)allowsMultipleValues;
-(char)allowsPortSuffix;
-(char)allowsWildcardDomains;
-(void)setAllowsMultipleValues:(char)arg1 ;
-(void)setAllowsPortSuffix:(char)arg1 ;
-(void)setAllowsWildcardDomains:(char)arg1 ;
-(char)isStringValidDomain:(id)arg1 ;
-(char)allowsWildcardDomain;
-(void)setAllowsWildcardDomain:(char)arg1 ;
@end

