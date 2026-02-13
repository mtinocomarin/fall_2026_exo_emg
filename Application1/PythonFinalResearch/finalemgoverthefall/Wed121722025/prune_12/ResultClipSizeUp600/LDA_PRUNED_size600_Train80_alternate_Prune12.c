// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\Wed121722025\prune_12\ResultClipSizeUp600
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\Wed121722025\ResultClipSizeUp600
// sample_size: 600
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 80.45%
// test_accuracy: 54.55%
// prune_trials_per_label: 12
// removed_trials: {'act2': ['act2\\trial_35.txt', 'act2\\trial_39.txt', 'act2\\trial_25.txt', 'act2\\trial_33.txt', 'act2\\trial_14.txt', 'act2\\trial_23.txt', 'act2\\trial_37.txt', 'act2\\trial_19.txt', 'act2\\trial_22.txt', 'act2\\trial_11.txt', 'act2\\trial_20.txt', 'act2\\trial_40.txt'], 'act1': ['act1\\trial_27.txt', 'act1\\trial_23.txt', 'act1\\trial_26.txt', 'act1\\trial_33.txt', 'act1\\trial_21.txt', 'act1\\trial_30.txt', 'act1\\trial_37.txt', 'act1\\trial_25.txt', 'act1\\trial_3.txt', 'act1\\trial_40.txt', 'act1\\trial_8.txt', 'act1\\trial_1.txt']}
// generated: 2025-12-17 13:47:34
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -1.023171, 1.023277,
    0.597072, -0.597312,
    -0.129852, 0.129888,
    -0.334409, 0.334540,
    -0.216457, 0.216476,
    -0.412091, 0.412083,
    0.099697, -0.099705,
    0.261009, -0.261000,
    -0.779179, 0.779212,
    0.281445, -0.281470,
    0.081501, -0.081511,
    0.157294, -0.157300,
};

float Cg_init[2] = {
    -0.357949, -0.357988
};

float xstd_init[12] = {
    0.001079, 0.000081, 0.010310, 0.081762, 0.003156, 0.000876, 0.094953, 0.188246, 0.000869, 0.000113, 0.018209, 0.072568
};

float xmean_init[12] = {
    0.006504, -0.007687, 0.003455, 0.142546, 0.008516, -0.006857, 0.105394, 0.433364, 0.004425, -0.007709, 0.009455, 0.133091
};

