/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:59:33 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol GQHXMLOutput <NSObject>
@required
-(void)endElementWithExpectedName:(const char*)arg1;
-(CFDataRef)createProgressiveHtml;
-(void)addCharRef:(const char*)arg1;
-(void)addXmlCharContent:(const char*)arg1;
-(CFDataRef)createHtml;
-(CFDataRef)createHtmlWithCss:(CFStringRef)arg1;
-(void)setAttribute:(const char*)arg1 value:(const char*)arg2;
-(void)startElement:(const char*)arg1;
-(void)endElement;

@end

