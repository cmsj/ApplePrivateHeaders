/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:59 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/MusicLibrary.framework/Versions/A/MusicLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MusicLibrary/ML3PropertyPredicate.h>

@interface ML3ContainsPredicate : ML3PropertyPredicate {

	id _values;

}

@property (nonatomic,copy) id values;              //@synthesize values=_values - In the implementation block
+(char)supportsSecureCoding;
+(id)predicateWithProperty:(id)arg1 values:(id)arg2 ;
+(id)predicateWithProperty:(id)arg1 valueSet:(id)arg2 ;
-(char)isEqual:(id)arg1 ;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)values;
-(void)setValues:(id)arg1 ;
-(void)appendSQLToMutableString:(id)arg1 entityClass:(Class)arg2 ;
-(id)databaseStatementParameters;
-(char)containsPropertyPredicate:(id)arg1 matchingValue:(id)arg2 usingComparison:(int)arg3 ;
-(id)initWithProperty:(id)arg1 values:(id)arg2 ;
@end

