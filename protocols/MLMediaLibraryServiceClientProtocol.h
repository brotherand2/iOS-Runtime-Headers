/* Generated by RuntimeBrowser.
 */

@protocol MLMediaLibraryServiceClientProtocol <NSObject>

@required

- (oneway void)importOperationWithIdentifier:(NSUUID *)arg1 didUpdateWithProgress:(float)arg2;
- (oneway void)serviceTerminatedTransactionWithIdentifier:(NSUUID *)arg1 error:(NSError *)arg2;

@end