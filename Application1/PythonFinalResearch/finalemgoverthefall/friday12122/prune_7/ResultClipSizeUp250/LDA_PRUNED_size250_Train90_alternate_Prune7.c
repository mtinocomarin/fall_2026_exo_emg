// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final2\prune_7\ResultClipSizeUp250
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final2\ResultClipSizeUp250
// sample_size: 250
// split_type: alternate
// train_percent: 90
// test_percent: 10
// train_accuracy: 87.93%
// test_accuracy: 81.25%
// prune_trials_per_label: 7
// removed_trials: {'act1': ['act1\\trial_27.txt', 'act1\\trial_34.txt', 'act1\\trial_17.txt', 'act1\\trial_22.txt', 'act1\\trial_23.txt', 'act1\\trial_31.txt', 'act1\\trial_32.txt'], 'act2': ['act2\\trial_2.txt', 'act2\\trial_11.txt', 'act2\\trial_12.txt', 'act2\\trial_18.txt', 'act2\\trial_6.txt', 'act2\\trial_14.txt', 'act2\\trial_15.txt']}
// generated: 2025-12-12 16:05:30
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.908127, 0.908116,
    -0.024792, 0.024776,
    0.562904, -0.562919,
    0.727106, -0.727081,
    1.038832, -1.038959,
    -1.458040, 1.458227,
    0.370396, -0.370437,
    -0.290142, 0.290137,
    1.040126, -1.040194,
    -0.511671, 0.511878,
    -0.372520, 0.372461,
    0.277394, -0.277475,
};

float Cg_init[2] = {
    -0.639053, -0.639079
};

float xstd_init[12] = {
    0.003859, 0.001406, 0.096711, 0.170499, 0.001740, 0.000537, 0.033357, 0.088953, 0.000566, 0.000093, 0.019308, 0.068087
};

float xmean_init[12] = {
    0.009914, -0.006233, 0.165172, 0.570517, 0.003315, -0.007684, 0.008851, 0.052759, 0.003137, -0.007808, 0.004598, 0.065690
};

