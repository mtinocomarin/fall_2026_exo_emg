// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\Wed121722025\prune_7\ResultClipSizeUp250
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\Wed121722025\ResultClipSizeUp250
// sample_size: 250
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 81.00%
// test_accuracy: 60.94%
// prune_trials_per_label: 7
// removed_trials: {'act1': ['act1\\trial_27.txt', 'act1\\trial_37.txt', 'act1\\trial_21.txt', 'act1\\trial_25.txt', 'act1\\trial_26.txt', 'act1\\trial_19.txt', 'act1\\trial_28.txt'], 'act2': ['act2\\trial_14.txt', 'act2\\trial_19.txt', 'act2\\trial_35.txt', 'act2\\trial_39.txt', 'act2\\trial_13.txt', 'act2\\trial_18.txt', 'act2\\trial_33.txt']}
// generated: 2025-12-17 13:44:41
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.798549, 0.798418,
    0.107926, -0.107674,
    0.145949, -0.145981,
    0.142994, -0.143130,
    -0.442361, 0.442379,
    -0.136791, 0.136805,
    0.095745, -0.095759,
    -0.109922, 0.109913,
    -0.976005, 0.975929,
    0.588863, -0.588742,
    -0.336866, 0.336815,
    0.434196, -0.434216,
};

float Cg_init[2] = {
    -0.362573, -0.362553
};

float xstd_init[12] = {
    0.001037, 0.000080, 0.011479, 0.081098, 0.002439, 0.000684, 0.075871, 0.156687, 0.000916, 0.000124, 0.018937, 0.070567
};

float xmean_init[12] = {
    0.006428, -0.007692, 0.004667, 0.140000, 0.008563, -0.006897, 0.100667, 0.450000, 0.004395, -0.007710, 0.009733, 0.135400
};

