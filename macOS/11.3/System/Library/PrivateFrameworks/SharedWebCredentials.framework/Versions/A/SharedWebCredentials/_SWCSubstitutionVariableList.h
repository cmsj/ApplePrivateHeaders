/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:07 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/SharedWebCredentials.framework/Versions/A/SharedWebCredentials
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SharedWebCredentials/SharedWebCredentials-Structs.h>
#import <libobjc.A.dylib/SWCRedactedDescription.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@interface _SWCSubstitutionVariableList : NSObject <SWCRedactedDescription, NSSecureCoding> {

	SWCSubstitutionVariable _variables[0];

}

@property (readonly) unsigned long long count; 
+(char)supportsSecureCoding;
+(id)substitutionVariableListWithDictionary:(id)arg1 ;
+(id)cheapBuiltInSubstitutionVariableList;
+(id)expensiveBuiltInSubstitutionVariableList;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)debugDescription;
-(unsigned long long)count;
-(id)redactedDescription;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)_descriptionDebug:(char)arg1 redacted:(char)arg2 ;
-(void)enumerateSubstitutionVariablesWithBlock:(/*^block*/id)arg1 ;
@end
