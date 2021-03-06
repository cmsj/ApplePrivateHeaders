/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:39 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/PhotoFoundation.framework/Versions/A/PhotoFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSArray;

@interface PFAssertionInfo : NSObject {

	char _isClassMethod;
	char _isFatal;
	SEL _selector;
	Class _objectClass;
	NSString* _functionName;
	NSString* _fileName;
	unsigned long long _lineNumber;
	NSString* _message;
	NSArray* _backtrace;

}

@property (assign) SEL selector;                               //@synthesize selector=_selector - In the implementation block
@property (retain) Class objectClass;                          //@synthesize objectClass=_objectClass - In the implementation block
@property (assign) char isClassMethod;                         //@synthesize isClassMethod=_isClassMethod - In the implementation block
@property (retain) NSString * functionName;                    //@synthesize functionName=_functionName - In the implementation block
@property (retain) NSString * fileName;                        //@synthesize fileName=_fileName - In the implementation block
@property (assign) unsigned long long lineNumber;              //@synthesize lineNumber=_lineNumber - In the implementation block
@property (retain) NSString * message;                         //@synthesize message=_message - In the implementation block
@property (retain) NSArray * backtrace;                        //@synthesize backtrace=_backtrace - In the implementation block
@property (assign) char isFatal;                               //@synthesize isFatal=_isFatal - In the implementation block
-(id)description;
-(SEL)selector;
-(void)setSelector:(SEL)arg1 ;
-(NSString *)message;
-(void)setMessage:(NSString *)arg1 ;
-(unsigned long long)lineNumber;
-(void)setFileName:(NSString *)arg1 ;
-(NSString *)fileName;
-(Class)objectClass;
-(void)setObjectClass:(Class)arg1 ;
-(NSString *)functionName;
-(void)setFunctionName:(NSString *)arg1 ;
-(void)setLineNumber:(unsigned long long)arg1 ;
-(void)setIsFatal:(char)arg1 ;
-(void)setBacktrace:(NSArray *)arg1 ;
-(void)setIsClassMethod:(char)arg1 ;
-(id)prettyMethodName;
-(char)isWarning;
-(char)isClassMethod;
-(NSArray *)backtrace;
-(char)isFatal;
@end

