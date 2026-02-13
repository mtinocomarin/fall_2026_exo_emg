// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final2\prune_4\ResultClipSizeUp400
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final2\ResultClipSizeUp400
// sample_size: 400
// split_type: alternate
// train_percent: 90
// test_percent: 10
// train_accuracy: 80.36%
// test_accuracy: 76.79%
// prune_trials_per_label: 4
// removed_trials: {'act2': ['act2\\trial_16.txt', 'act2\\trial_12.txt', 'act2\\trial_14.txt', 'act2\\trial_2.txt'], 'act1': ['act1\\trial_23.txt', 'act1\\trial_30.txt', 'act1\\trial_34.txt', 'act1\\trial_40.txt']}
// generated: 2025-12-12 16:03:59
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.873636, 0.873627,
    -0.098561, 0.098576,
    0.500906, -0.500924,
    0.670802, -0.670792,
    0.953750, -0.953611,
    -1.332832, 1.332628,
    0.078471, -0.078432,
    0.115165, -0.115138,
    -0.370547, 0.370531,
    0.567428, -0.567461,
    -0.483102, 0.483121,
    0.132565, -0.132558,
};

float Cg_init[2] = {
    -0.359419, -0.359410
};

float xstd_init[12] = {
    0.003684, 0.001388, 0.099984, 0.166426, 0.001659, 0.000507, 0.029426, 0.083070, 0.001129, 0.000090, 0.017796, 0.066094
};

float xmean_init[12] = {
    0.009775, -0.006263, 0.166905, 0.575357, 0.003252, -0.007708, 0.007738, 0.051518, 0.003198, -0.007808, 0.004702, 0.066429
};

