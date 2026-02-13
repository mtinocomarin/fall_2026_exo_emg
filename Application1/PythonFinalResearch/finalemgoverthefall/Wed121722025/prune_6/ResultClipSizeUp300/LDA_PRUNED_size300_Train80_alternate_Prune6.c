// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\Wed121722025\prune_6\ResultClipSizeUp300
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\Wed121722025\ResultClipSizeUp300
// sample_size: 300
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 77.31%
// test_accuracy: 57.50%
// prune_trials_per_label: 6
// removed_trials: {'act1': ['act1\\trial_26.txt', 'act1\\trial_27.txt', 'act1\\trial_37.txt', 'act1\\trial_23.txt', 'act1\\trial_3.txt', 'act1\\trial_10.txt'], 'act2': ['act2\\trial_14.txt', 'act2\\trial_33.txt', 'act2\\trial_35.txt', 'act2\\trial_25.txt', 'act2\\trial_39.txt', 'act2\\trial_40.txt']}
// generated: 2025-12-17 13:44:10
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.682383, 0.682336,
    0.348650, -0.348553,
    0.236375, -0.236388,
    -0.127687, 0.127635,
    -0.578370, 0.578367,
    -0.341071, 0.341066,
    0.347634, -0.347618,
    0.324904, -0.324903,
    -0.898201, 0.898214,
    0.252330, -0.252364,
    -0.142325, 0.142341,
    0.461141, -0.461133,
};

float Cg_init[2] = {
    -0.300690, -0.300681
};

float xstd_init[12] = {
    0.001027, 0.000082, 0.011058, 0.082414, 0.002638, 0.000762, 0.080140, 0.171248, 0.000889, 0.000116, 0.018131, 0.075377
};

float xmean_init[12] = {
    0.006481, -0.007685, 0.004205, 0.143077, 0.008580, -0.006868, 0.099487, 0.454000, 0.004330, -0.007714, 0.009538, 0.129692
};

